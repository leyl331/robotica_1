import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/leyla/Desktop/clase1/ejemplo1_ws/install/my_package_class'
