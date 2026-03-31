from setuptools import find_packages
from setuptools import setup

setup(
    name='yolo26_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('yolo26_interfaces', 'yolo26_interfaces.*')),
)
