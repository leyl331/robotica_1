import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import random

class RandomNumberPublisher(Node):
    def __init__(self):
        super().__init__('name_node11')
        self.publisher_ = self.create_publisher(Int32, 'random_number', 10)
        self.timer = self.create_timer(1.0, self.publish_number) 

    def publish_number(self):
        msg = Int32()
        msg.data = random.randint(0, 10)  
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
