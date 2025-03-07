# import rclpy
# from rclpy.node import Node
# from std_msgs.msg import Int32

# class Node3(Node):
#     def __init__(self):
#         super().__init__('name_node3')
        
#         # Suscribirse a topic_impares
#         self.subscription1 = self.create_subscription(
#             Int32, 'topic_impares', self.impares_callback, 10)
        
#         # Suscribirse a topic_pares
#         self.subscription2 = self.create_subscription(
#             Int32, 'topic_pares', self.pares_callback, 10)
        
#         self.total_sum = 0


#     #  -- DIFFERENT TOPIC ,  diferent  (msg)  ,   procesa solo su propio mensaje  ---
#     #     variables locales solo existen dentro de la función
#     def impares_callback(self, msg):
#         square = msg.data ** 2
#         self.total_sum += square
#         self.get_logger().info(f'IMPAR: {msg.data}, {msg.data}² = {square}')
#         self.print_total_sum()

#     def pares_callback(self, msg):
#         square = msg.data ** 2
#         self.total_sum += square
#         self.get_logger().info(f'PAR: {msg.data}, {msg.data}² = {square}')
#         self.print_total_sum()

#     def print_total_sum(self):
#         self.get_logger().info(f'➡ Suma de cuadrados = {self.total_sum}\n')

# def main():
#     rclpy.init()
#     node = Node3()
#     rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()



# EN PARALELO --------------------------------------------------------------------------

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import Int32

class Node3(Node):
    def __init__(self):
        super().__init__('name_node3')
        
        # Suscribirse a topic_impares
        self.subscription1 = self.create_subscription(
            Int32, 'topic_impares', self.impares_callback, 10)
        
        # Suscribirse a topic_pares
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
    
    # Usar un MultiThreadedExecutor para procesar ambos tópicos en paralelo
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    
    try:
        executor.spin()  # Ejecutar el nodo con múltiples hilos
    finally:
        node.destroy_node()
        rclpy.shutdown()
