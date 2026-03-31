import cv2
import rclpy
from rclpy.node import Node
from ultralytics import YOLO

from yolo26_interfaces.msg import YoloDetection, YoloDetectionArray


class Yolo26DetectorNode(Node):
    def __init__(self):
        super().__init__('yolo26_detector_node')

        self.declare_parameter('model_path', '/home/merve/yolo26nvisdroneboat.pt')
        self.declare_parameter(
            'video_source',
            '/home/merve/ros2_ws/License Plate Detection Test.mp4'
        )
        self.declare_parameter('conf_threshold', 0.25)
        self.declare_parameter('frame_id', 'camera')
        self.declare_parameter('topic_name', '/yolo26/detections')

        model_path = self.get_parameter('model_path').get_parameter_value().string_value
        video_source = self.get_parameter('video_source').get_parameter_value().string_value
        self.conf_threshold = self.get_parameter('conf_threshold').get_parameter_value().double_value
        self.frame_id = self.get_parameter('frame_id').get_parameter_value().string_value
        topic_name = self.get_parameter('topic_name').get_parameter_value().string_value

        self.publisher_ = self.create_publisher(
            YoloDetectionArray,
            topic_name,
            10
        )

        self.get_logger().info(f'Model yükleniyor: {model_path}')
        self.model = YOLO(model_path)

        self.cap = cv2.VideoCapture(video_source)
        if not self.cap.isOpened():
            self.get_logger().error(f'Video açılamadı: {video_source}')
            raise RuntimeError(f'Video açılamadı: {video_source}')

        self.class_names = self.model.names
        self.timer = self.create_timer(0.033, self.timer_callback)

        self.get_logger().info(f'Video kaynağı açıldı: {video_source}')
        self.get_logger().info('Yolo26DetectorNode başlatıldı.')

    def timer_callback(self):
        ret, frame = self.cap.read()

        if not ret:
            self.get_logger().info('Video bitti, node kapatılıyor.')
            self.cap.release()
            self.destroy_node()
            rclpy.shutdown()
            return

        frame_height, frame_width = frame.shape[:2]
        results = self.model(frame, verbose=False, conf=self.conf_threshold)

        msg = YoloDetectionArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.frame_id
        msg.image_width = frame_width
        msg.image_height = frame_height

        if len(results) > 0 and results[0].boxes is not None:
            for box in results[0].boxes:
                det = YoloDetection()

                cls_id = int(box.cls.item())
                conf = float(box.conf.item())
                xyxy = box.xyxy[0].tolist()

                det.class_id = cls_id
                det.class_name = str(self.class_names[cls_id])
                det.confidence = conf
                det.xmin = float(xyxy[0])
                det.ymin = float(xyxy[1])
                det.xmax = float(xyxy[2])
                det.ymax = float(xyxy[3])
                det.track_id = -1

                msg.detections.append(det)

        self.publisher_.publish(msg)
        self.get_logger().info(f'Published {len(msg.detections)} detections')

    def destroy_node(self):
        if hasattr(self, 'cap') and self.cap is not None:
            self.cap.release()
        super().destroy_node()