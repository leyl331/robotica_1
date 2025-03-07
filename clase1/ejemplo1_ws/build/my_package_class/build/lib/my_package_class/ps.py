
import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Int32


class Nodops(Node):

    def __init__(self):
        super().__init__('ps')

        self.contador = 25  

        # Suscriptor  'lipa' 
        self.subscription = self.create_subscription(String, 'topic1', self.listener_callback, 10) #lipa
        self.subscription

        # Publicador  'lipa_int'
        self.publisher = self.create_publisher(Int32, 'lipa_int', 10)
        # Timer - publicar 
        self.timer = self.create_timer(1.0, self.timer_callback)


    def listener_callback(self, msg):
        self.get_logger().info(f'Mensaje recibido : "{msg.data}"')

    def timer_callback(self):
        msg_int = Int32()
        msg_int.data = self.contador  # Publica 20 o un contador
        self.publisher.publish(msg_int)

        self.get_logger().info(f'Publicado: {msg_int.data}')
        
        # Si quieres un contador creciente, descomenta la siguiente línea
        # self.contador += 1


def main(args=None):
    rclpy.init(args=args)
    mi_nodo = Nodops()
    rclpy.spin(mi_nodo)
    mi_nodo.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
