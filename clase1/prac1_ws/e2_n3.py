import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class Node3(Node):
    def __init__(self):
        super().__init__('name_node3')
        

        self.subscription1 = self.create_subscription(
            Int32, 'topic_impares', self.impares_callback, 10)
        

        self.subscription2 = self.create_subscription(
            Int32, 'topic_pares', self.pares_callback, 10)
        
        self.total_sum = 0


    def impares_callback(self, msg):
        square = msg.data ** 2
        self.total_sum += square
        self.get_logger().info(f'IMPAR: {msg.data}, {msg.data}² = {square}')
        self.print_total_sum()

    def pares_callback(self, msg):
        square = msg.data ** 2
        self.total_sum += square
        self.get_logger().info(f'PAR: {msg.data}, {msg.data}² = {square}')
        self.print_total_sum()

    def print_total_sum(self):
        self.get_logger().info(f'➡ Suma de cuadrados = {self.total_sum}\n')

def main():
    rclpy.init()
    node = Node3()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

