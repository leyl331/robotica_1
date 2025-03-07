from setuptools import find_packages, setup

package_name = 'my_package_class'

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
            # nombre del ejecutable del programa, CREAR EJECUTABLES PARA EL PUB Y SUB
    
            'pub = my_package_class.pub:main',
            'sub = my_package_class.sub:main',
            
            'ps = my_package_class.ps:main',
            's_test= my_package_class.s_test:main',
            'custom_pub = my_package_class.pub_custom_msg:main',
            'custom_sub = my_package_class.sub_custom_msg:main',
            'service = my_package_class.service:main',
            
        ],
    },
)
