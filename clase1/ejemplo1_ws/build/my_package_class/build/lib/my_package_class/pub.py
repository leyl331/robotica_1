# PUBLICADOR

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class MiNodoPublicador(Node):

    def __init__(self):
        
        super().__init__('pub')  # name node
        self.publisher = self.create_publisher(String, 'lipa', 10)  # tópico, STRING
        time_period = 0.5  # tiempo de publicación

        self.timer = self.create_timer(time_period, self.timer_callback)  # pub timmer
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = f'Hola : {self.i}'
        self.publisher.publish(msg)

        self.get_logger().info(f'Publicado pruebaa: "{msg.data}"')
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    mi_nodo = MiNodoPublicador()  # crear nodo

    rclpy.spin(mi_nodo)  # bucle 
    mi_nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
