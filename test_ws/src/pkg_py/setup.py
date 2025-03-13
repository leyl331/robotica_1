from setuptools import find_packages, setup

package_name = 'pkg_py'

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
    maintainer_email='lipaleyla9@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'e1_server = pkg_py.e1_server:main',
            'e1_client= pkg_py.e1_client:main', 

            'e1_pub= pkg_py.e1_pub:main', 
            'e1_sub= pkg_py.e1_sub:main'


        ],
    },
)
