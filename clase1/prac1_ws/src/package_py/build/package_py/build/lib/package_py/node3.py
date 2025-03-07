import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8, Float32

class AverageCalculator(Node):
    def __init__(self):
        super().__init__('node3')
        self.subscription = self.create_subscription(Int8, 'sum', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(Float32, 'average', 10)
        self.count = 0
        self.total_sum = 0.0

    def listener_callback(self, msg):
        self.count += 1
        self.total_sum = msg.data
        average_msg = Float32()
        average_msg.data = self.total_sum / self.count
        self.publisher_.publish(average_msg)
        self.get_logger().info(f'Promedio: {average_msg.data}')

def main(args=None):
    rclpy.init(args=args)
    node = AverageCalculator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
