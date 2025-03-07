# SERVIDOR 

from ucb_interface.srv import Addtwonumbers
import rclpy
from rclpy.node import Node

class MinimalService(Node):
    def __init__(self):
        super().__init__('service')
        self.srv = self.create_service(Addtwonumbers, 'top_serv', self.add_numbers_callback)

    def add_numbers_callback(self, req, res):
        res.sum = req.a + req.b

        self.get_logger().info('Incoming request\na: %d b: %d' % (req.a, req.b))

        return res

def main():
    rclpy.init()
    min_svc = MinimalService()
    rclpy.spin(min_svc)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
