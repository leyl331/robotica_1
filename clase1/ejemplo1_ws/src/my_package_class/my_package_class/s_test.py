# SUSCRIPTOR

# mismo topico para comunicarse


import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Int32

class MiSubscriptor(Node):

    def __init__(self):
        super().__init__('s_test')  # name NODE
        self.subscription = self.create_subscription(String, 'lipa', self.listener_callback,10) # type, TOPIC
        self.subscription

    def listener_callback(self,msg):
        self.get_logger().info(f'Recivido test: "%s"' %msg.data) 

def main(args=None):

    rclpy.init(args=args)
    mi_nodo = MiSubscriptor()  # Aquí se crea el nodo con el nombre pasado
    rclpy.spin(mi_nodo)  # Ejecuta el nodo hasta que se interrumpa
    mi_nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
