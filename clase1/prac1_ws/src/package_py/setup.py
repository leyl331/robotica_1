from setuptools import find_packages, setup

package_name = 'package_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='leyla',
    maintainer_email='leyla@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'node1 = package_py.node1:main',
            'node2 = package_py.node2:main',
            'node3 = package_py.node3:main',

            'e2n1 = package_py.e2_n1:main',
            'e2n2 = package_py.e2_n2:main',
            'e2n3 = package_py.e2_n3:main',
        
        ],
    },
)
