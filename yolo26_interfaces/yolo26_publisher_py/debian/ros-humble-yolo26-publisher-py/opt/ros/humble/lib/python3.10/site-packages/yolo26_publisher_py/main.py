import rclpy
from yolo26_publisher_py.detector_impl import Yolo26DetectorNode


def main(args=None):
    rclpy.init(args=args)
    node = Yolo26DetectorNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    main()