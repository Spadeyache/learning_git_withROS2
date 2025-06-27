from setuptools import find_packages
from setuptools import setup

setup(
    name='robovision_services',
    version='0.0.0',
    packages=find_packages(
        include=('robovision_services', 'robovision_services.*')),
)
