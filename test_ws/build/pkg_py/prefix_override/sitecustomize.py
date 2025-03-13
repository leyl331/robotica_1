import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/leyla/Desktop/prueba/test_ws/install/pkg_py'
