import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/leyla/Desktop/repositorio_lipa/robotica_1/clase1/prac1_ws/install/package_py'
