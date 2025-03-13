import rclpy
from rclpy.node import Node
from interface.srv import Service  # Importar el servicio creado previamente
import sympy as sp

class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service')  # Nombre del nodo
        self.srv = self.create_service(Service, 'cinematica', self.calculate_kinematics)
        self.get_logger().info('Servicio de Cinemática Examen Listo!')

    def calculate_kinematics(self, req, response):
        a1, a2, a3, a4 = sp.symbols('a1 a2 a3 a4')

        L1 = 69.5
        L2 = 71.5

        # Convertir los ángulos de grados a radianes
        a1_rad = sp.rad(req.a1)
        a2_rad = sp.rad(req.a2)
        a3_rad = sp.rad(req.a3)
        a4_rad = sp.rad(req.a4)

        # Definir las matrices de transformación
        Rx1 = sp.Matrix([
            [1, 0, 0, 0],
            [0, sp.cos(a1_rad), -sp.sin(a1_rad), 0],
            [0, sp.sin(a1_rad), sp.cos(a1_rad), 0],
            [0, 0, 0, 1]
        ])

        Ry1 = sp.Matrix([
            [sp.cos(a2_rad), 0, sp.sin(a2_rad), 0],
            [0, 1, 0, 0],
            [-sp.sin(a2_rad), 0, sp.cos(a2_rad), 0],
            [0, 0, 0, 1]
        ])

        Ry2 = sp.Matrix([
            [sp.cos(a3_rad), 0, sp.sin(a3_rad), 0],
            [0, 1, 0, 0],
            [-sp.sin(a3_rad), 0, sp.cos(a3_rad), 0],
            [0, 0, 0, 1]
        ])

        Ry3 = sp.Matrix([
            [sp.cos(a4_rad), 0, sp.sin(a4_rad), 0],
            [0, 1, 0, 0],
            [-sp.sin(a4_rad), 0, sp.cos(a4_rad), 0],
            [0, 0, 0, 1]
        ])

        Tz1 = sp.Matrix([
            [1, 0, 0, -L1],
            [0, 1, 0, -L1],
            [0, 0, 1, -L1],
            [0, 0, 0, 1]
        ])

        Tz2 = sp.Matrix([
            [1, 0, 0, -L2],
            [0, 1, 0, -L2],
            [0, 0, 1, -L2],
            [0, 0, 0, 1]
        ])

        # Calcular la matriz M
        M = Rx1 * Ry1 * Tz1 * Ry2 * Tz2 * Ry3

        # Simplificar la matriz M multiplicada por el vector [0, 0, 0, 1]
        M_simplified = (M * sp.Matrix([0, 0, 0, 1])).evalf()

        # Extraer los valores de x, y, z
        x, y, z = M_simplified[:3]

        # Extraer matriz de rotación y calcular los ángulos de Euler
        R = M[:3, :3]
        yaw = sp.atan2(R[1, 0], R[0, 0])
        pitch = sp.atan2(-R[2, 0], sp.sqrt(R[2, 1]**2 + R[2, 2]**2))
        roll = sp.atan2(R[2, 1], R[2, 2])

        # Enviar respuesta
        response.x = float(x)
        response.y = float(y)
        response.z = float(z)
        response.ya = float(yaw.evalf())
        response.pi = float(pitch.evalf())
        response.ro = float(roll.evalf())

        self.get_logger().info(
            f'Valores recibidos:\na1: {req.a1}, a2: {req.a2}, a3: {req.a3}, a4: {req.a4}\n'
            f'Respuesta enviada: x: {response.x}, y: {response.y}, z: {response.z}, '
            f'yaw: {response.ya}, pitch: {response.pi}, roll: {response.ro}'
        )

        return response

def main():
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
