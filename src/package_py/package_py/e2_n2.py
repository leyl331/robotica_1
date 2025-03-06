import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class Node2(Node):
    def __init__(self):
        super().__init__('name_node2')
        self.publisher_ = self.create_publisher(Int32, 'topic_pares', 10)
        self.timer = self.create_timer(1.0, self.publish_number)
        self.current_number = 2  

    def publish_number(self):
        msg = Int32()
        msg.data = self.current_number
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publish : {msg.data}')
        self.current_number += 2  

def main():
    rclpy.init()
    node = Node2()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
