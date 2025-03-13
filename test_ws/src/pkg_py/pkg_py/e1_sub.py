import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8

class RobotController(Node):
    def __init__(self):
        super().__init__('motor_estados')
        self.subscription = self.create_subscription(Int8, 'binario', self.listener_callback, 10)
        self.subscription

        # Diccionario con los estados según la tabla
        self.state_map = {
            0b000: ("1", "1", "Adelante"),
            0b001: ("0", "1", "Derecha"),
            0b010: ("0", "0", "Alto"),
            0b011: ("0", "1", "Derecha"),
            0b100: ("1", "0", "Izquierda"),
            0b101: ("1", "1", "Adelante"),
            0b110: ("1", "0", "Izquierda"),
            0b111: ("0", "0", "Alto"),
        }

    def listener_callback(self, msg):

        sensor_bin = msg.data

        mi, md, estado = self.state_map.get(sensor_bin)

        self.get_logger().info(f'Sensores : {bin(sensor_bin)[2:]:>03} ,  Motores: MI={mi}, MD={md}, Estado={estado}')

def main(args=None):

    rclpy.init(args=args)
    node = RobotController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


# ------------------ String ---------------------
# import rclpy
# from rclpy.node import Node
# from std_msgs.msg import String  # Cambiar a String en lugar de Int8

# class RobotController(Node):
#     def __init__(self):
#         super().__init__('motor_estados')
#         self.subscription = self.create_subscription(String, 'binario', self.listener_callback, 10)  # Ahora recibe String
#         self.subscription

#         # Diccionario con los estados según la tabla, usando cadenas binarias como clave
#         self.state_map = {
#             '000': ("1", "1", "Adelante"),
#             '001': ("0", "1", "Derecha"),
#             '010': ("0", "0", "Alto"),
#             '011': ("0", "1", "Derecha"),
#             '100': ("1", "0", "Izquierda"),
#             '101': ("1", "1", "Adelante"),
#             '110': ("1", "0", "Izquierda"),
#             '111': ("0", "0", "Alto"),
#         }

#     def listener_callback(self, msg):
#         sensor_bin = msg.data  

#         # Usamos el diccionario con cadenas binarias como clave
#         mi, md, estado = self.state_map.get(sensor_bin)
        
#         # Mostrar la información con la cadena binaria que se recibe
#         self.get_logger().info(f'Sensores : {sensor_bin} ,  Motores: MI={mi}, MD={md}, Estado={estado}')

# def main(args=None):
#     rclpy.init(args=args)
#     node = RobotController()
#     rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
