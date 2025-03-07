# from example_interfaces.srv import AddTwoInts
from more_interfaces.srv import ForwardKinematics
import rclpy
from rclpy.node import Node
import sympy as sp


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(ForwardKinematics, 'kinematics',
                                       self.calculate_kinematics)

    def calculate_kinematics(self, request, response):

        # Definir variables simbólicas
        th1, th2, th3, L1, L2 = sp.symbols('th1 th2 th3 L1 L2')

        # Definir las matrices de transformación
        Ry1 = sp.Matrix([[sp.cos(-th1), 0, sp.sin(-th1), 0], [0, 1, 0, 0],
                         [-sp.sin(-th1), 0, sp.cos(-th1), 0], [0, 0, 0, 1]])

        Rx1 = sp.Matrix([[1, 0, 0, 0], [0, sp.cos(th2), -sp.sin(th2), 0],
                         [0, sp.sin(th2), sp.cos(th2), 0], [0, 0, 0, 1]])

        Tz1 = sp.Matrix([[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, -L1],
                         [0, 0, 0, 1]])

        Ry2 = sp.Matrix([[sp.cos(-th3), 0, sp.sin(-th3), 0], [0, 1, 0, 0],
                         [-sp.sin(-th3), 0, sp.cos(-th3), 0], [0, 0, 0, 1]])

        Tz2 = sp.Matrix([[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, -L2],
                         [0, 0, 0, 1]])

        # Calcular la matriz M
        M = Ry1 * Rx1 * Tz1 * Ry2 * Tz2

        # Simplificar la matriz M multiplicada por el vector [0, 0, 0, 1]
        M_simplified = sp.simplify(M * sp.Matrix([0, 0, 0, 1]))

        # Mostrar la matriz simplificada
        #print("M simplificada:")
        #sp.pprint(M_simplified)

        # Extraer los valores de x, y, z
        x = M_simplified[0]  # Cambiar de notación de paréntesis a corchetes
        y = M_simplified[1]
        z = M_simplified[2]

        # Sustituir valores numéricos
        M_numeric = M_simplified.subs({
            th1: request.th1,
            th2: request.th2,
            th3: request.th3,
            L1: request.l1,
            L2: request.l2
        })

        # Extraer los valores de x, y, z
        x = M_numeric[0]
        y = M_numeric[1]
        z = M_numeric[2]

        response.x = float(x)
        response.y = float(y)
        response.z = float(z)

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
