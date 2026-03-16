import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Talker(Node):

    def __init__(self):
        super().__init__('talker')

        # chatter topic'ine publisher oluşturuyoruz
        self.publisher_ = self.create_publisher(String, 'chatter', 10)

        # 0.2 saniyede bir çalışacak timer (5 Hz)
        self.timer = self.create_timer(0.2, self.publish_message)

    def publish_message(self):
        msg = String()
        msg.data = "Ben Merve Akbey."
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = Talker()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
