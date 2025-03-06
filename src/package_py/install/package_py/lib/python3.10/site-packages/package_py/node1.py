import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8
import random

class RandomNumberPublisher(Node):
    def __init__(self):
        super().__init__('node1')
        self.publisher_ = self.create_publisher(Int8, 'random_number', 10)
        self.timer = self.create_timer(1.0, self.publish_number)  # Publica cada segundo

    def publish_number(self):
        msg = Int8()
        msg.data = random.randint(0, 127)  # Entero de 8 bits sin signo
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicado: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    node = RandomNumberPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
