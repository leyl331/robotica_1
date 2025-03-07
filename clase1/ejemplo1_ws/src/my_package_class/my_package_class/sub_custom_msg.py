# CLIENTE DEL SERVIDOR -- siiii


import sys
from ucb_interface.srv import Addtwonumbers
import rclpy
from rclpy.node import Node

class MinimalClientAsync(Node):
    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Addtwonumbers, 'top_serv')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Addtwonumbers.Request()

    def send_request(self, th1,th2,th3,l1,l2):
        self.req.th1 = th1
        self.req.th2= th2
        self.req.th3= th3
        self.req.l1= l1
        self.req.l2= l2
        return self.cli.call_async(self.req)

def main():
    rclpy.init()

    if len(sys.argv) < 6:  # 3, Asegurar que se ingresan 2 argumentos
        print("Error: Se requieren 5 números.")
        sys.exit(1)

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]), float(sys.argv[4]), float(sys.argv[5]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()


    minimal_client.get_logger().info(
        'Result of add_two_ints: for %d + %d = %d' %
        (float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]), float(sys.argv[4]), float(sys.argv[5]), response.x.y.z))

    minimal_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
