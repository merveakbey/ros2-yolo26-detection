from setuptools import setup, Extension

package_name = 'yolo26_publisher_py'

source_file = f'{package_name}/detector_impl.py'
use_cython = False

try:
    from Cython.Build import cythonize
    use_cython = True
except ImportError:
    cythonize = None

ext = '.py' if use_cython else '.c'

extensions = [
    Extension(
        name=f'{package_name}.detector_impl',
        sources=[f'{package_name}/detector_impl{ext}'],
    )
]

if use_cython:
    ext_modules = cythonize(
        extensions,
        compiler_directives={'language_level': '3'}
    )
else:
    ext_modules = extensions

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    ext_modules=ext_modules,
    data_files=[
        (
            'share/ament_index/resource_index/packages',
            ['resource/' + package_name],
        ),
        (
            'share/' + package_name,
            ['package.xml'],
        ),
    ],
    install_requires=['setuptools'],
    zip_safe=False,
    maintainer='merve',
    maintainer_email='akbeymerve1@gmail.com',
    description='YOLO26 detector ROS 2 node',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'yolo26_detector_node = yolo26_publisher_py.main:main',
        ],
    },
)