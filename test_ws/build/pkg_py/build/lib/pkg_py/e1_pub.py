
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8  


class SensorPublisher(Node):
    def __init__(self):
        super().__init__('sensor')
        self.publisher_ = self.create_publisher(Int8, 'binario', 10)
        self.timer = self.create_timer(3.0, self.publish_sensor_data)

        self.get_logger().info(' \t Started Publisher !!!')

        # self.sensor_states = [0b000, 0b001, 0b010, 0b011, 0b100, 0b101, 0b110, 0b111]
        self.sensor_states = list(range(8))  
        self.pos = 0
    
    def publish_sensor_data(self):

        sensor_value = self.sensor_states[self.pos]
        msg = Int8()
        msg.data = sensor_value
        self.publisher_.publish(msg)

        # Convertir a binario 
        binary_str = bin(sensor_value)[2:].zfill(3)
        self.get_logger().info(f'Sensores [S1][SC][SD] : {binary_str}') 

        self.pos = (self.pos + 1) % len(self.sensor_states) 

def main(args=None):

    rclpy.init(args=args)
    node = SensorPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()



#--------------------- String -----------
# import rclpy
# from rclpy.node import Node
# from std_msgs.msg import String  # Cambiar a String en lugar de Int8


# class SensorPublisher(Node):
#     def __init__(self):
#         super().__init__('sensor')
#         self.publisher_ = self.create_publisher(String, 'binario', 10)  # Publicador de String
#         self.timer = self.create_timer(3.0, self.publish_sensor_data)

#         self.get_logger().info(' \t Started Publisher !!!')

#         # Lista de binarios como strings
#         self.sensor_states = ['000', '001', '010', '011', '100', '101', '110', '111']
#         self.pos = 0
    
#     def publish_sensor_data(self):
#         sensor_value = self.sensor_states[self.pos]  # Obtener el valor binario en formato string
#         msg = String()
#         msg.data = sensor_value  # Guardar como string en el mensaje
#         self.publisher_.publish(msg)  # Publicar el mensaje

#         self.get_logger().info(f'Sensores [S1][SC][SD] : {sensor_value}')  # Mostrar el valor binario

#         self.pos = (self.pos + 1) % len(self.sensor_states)  # Ciclar los valores

# def main(args=None):
#     rclpy.init(args=args)
#     node = SensorPublisher()
#     rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
