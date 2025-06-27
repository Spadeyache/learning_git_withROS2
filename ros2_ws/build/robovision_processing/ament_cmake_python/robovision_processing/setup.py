from setuptools import find_packages
from setuptools import setup

setup(
    name='robovision_processing',
    version='0.0.0',
    packages=find_packages(
        include=('robovision_processing', 'robovision_processing.*')),
)
