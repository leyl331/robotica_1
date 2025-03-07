import sys

from more_interfaces.srv import ForwardKinematics
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(ForwardKinematics, 'kinematics')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = ForwardKinematics.Request()

    def send_request(self, th1, th2, th3, l1, l2):
        self.req.th1 = th1
        self.req.th2 = th2
        self.req.th3 = th3
        self.req.l1 = l1
        self.req.l2 = l2
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    th1 = 3.14
    th2 = 0.1
    th3 = 3.14
    l1 = 1.0
    l2 = 1.0
    future = minimal_client.send_request(th1, th2, th3, l1, l2)
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'valores enviados:  %f , %f , %f , %f , %f -> %f , %f , %f ' %
        (th1, th2, th3, l1, l2, response.x, response.y, response.z))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
