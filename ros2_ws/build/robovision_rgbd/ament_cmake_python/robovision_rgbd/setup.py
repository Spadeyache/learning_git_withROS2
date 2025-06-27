from setuptools import find_packages
from setuptools import setup

setup(
    name='robovision_rgbd',
    version='0.0.0',
    packages=find_packages(
        include=('robovision_rgbd', 'robovision_rgbd.*')),
)
