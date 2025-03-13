import sys
from interface.srv import Service# IMPORT SERVICIO. srv
import rclpy
from rclpy.node import Node

import sympy as sp #radian

class MinimalClientAsync(Node): # hereda NODE

    def __init__(self):
        super().__init__('cine_client') # name node
        self.cli = self.create_client(Service, 'cinematica') # TOPIC

        while not self.cli.wait_for_service(timeout_sec=1.0): # waiting 
            self.get_logger().info('Service not available, waiting ... ')
        self.req = Service.Request()

    def send_request(self,a1, a2, a3, a4 ):
        self.req.a1= a1
        self.req.a2= a2
        self.req.a3= a3
        self.req.a4= a4

        return self.cli.call_async(self.req) 

def main():

    rclpy.init()

    try:
        a1 = float(input("Ingrese a1 (°) :  "))
        a2 = float(input("Ingrese a2 (°) :  "))
        a3 = float(input("Ingrese a3 (°) :  "))
        a4 = float(input("Ingrese a4 (°) :  "))

    except ValueError:
        print("Ingrese solo números ")
        sys.exit(1)

    minimal_client = MinimalClientAsync()

    # l1 = 69.5
    # l2 = 71.5

        # Enviar REQUEST al SERVIDOR
    future = minimal_client.send_request(a1, a2, a3, a4)

        # Espera la respuesta
    rclpy.spin_until_future_complete(minimal_client, future)

    response = future.result()
    minimal_client.get_logger().info(
        '\t Valores enviados:\n'
        'a1: %.2f, a2: %.2f, a3: %.2f, a4: %.2f \n'

        ' ✅  \tResultados de traslación:\n'
        'x: %.2f, y: %.2f, z: %.2f\n'
        ' ✅  \tResultados de orientación:\n'
        'yaw: %.2f, pitch: %.2f, roll: %.2f' %

        (a1, a2, a3, a4, response.x, response.y, response.z, response.ya, response.pi, response.ro)
    )

    minimal_client.destroy_node()
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()
