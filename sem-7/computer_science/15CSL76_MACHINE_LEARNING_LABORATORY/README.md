# Machine Learning Laboratory 15CSL76
![Python](https://img.shields.io/pypi/pyversions/Django.svg?logo=python&logoColor=white&style=for-the-badge) [![SOSC](https://img.shields.io/badge/visit-sosc.org.in-brightgreen.svg?logo=data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHhtbG5zOnhsaW5rPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5L3hsaW5rIiB2aWV3Qm94PSIwIDAgNDQyLjc2IDE5MS44OSI+ICA8ZGVmcz4gICAgPGxpbmVhckdyYWRpZW50IGlkPSJhIiB4MT0iNDc0LjEyIiB5MT0iMjQ2LjAxIiB4Mj0iNzQ3Ljc5IiB5Mj0iMjQ2LjAxIiBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSI+ICAgICAgPHN0b3Agb2Zmc2V0PSIwIiBzdG9wLWNvbG9yPSIjMGJkZTRhIi8+ICAgICAgPHN0b3Agb2Zmc2V0PSIxIiBzdG9wLWNvbG9yPSIjMDBkNjcyIi8+ICAgIDwvbGluZWFyR3JhZGllbnQ+ICAgIDxsaW5lYXJHcmFkaWVudCBpZD0iYiIgeDE9IjQzMC43MyIgeTE9IjI0Ni4zNyIgeDI9IjcwNC4yMSIgeTI9IjI0Ni4zNyIgeGxpbms6aHJlZj0iI2EiLz4gICAgPGxpbmVhckdyYWRpZW50IGlkPSJjIiB4MT0iNzQwLjU1IiB5MT0iMjQ1LjIzIiB4Mj0iODI5LjY4IiB5Mj0iMjQ1LjIzIiB4bGluazpocmVmPSIjYSIvPiAgICA8bGluZWFyR3JhZGllbnQgaWQ9ImQiIHgxPSI3MTQuNzIiIHkxPSIyNDUuNjYiIHgyPSI4NzMuNDkiIHkyPSIyNDUuNjYiIHhsaW5rOmhyZWY9IiNhIi8+ICA8L2RlZnM+ICA8dGl0bGU+bG9nb19ncmFkPC90aXRsZT4gIDxwYXRoIGQ9Ik03NDcuNjMsMjQ2YTI5LjA3LDI5LjA3LDAsMCwwLC4xNiwzLjA2QTk1LjQ5LDk1LjQ5LDAsMCwxLDcyOS42LDMwMi4zYTk2LjYyLDk2LjYyLDAsMCwxLTE0Ljg4LDE2LjIzLDk2LDk2LDAsMCwxLTEyNS42NSwwQTk2LjYyLDk2LjYyLDAsMCwwLDYwNCwzMDIuM2E3My45Myw3My45MywwLDAsMCwxMjEuNy01MS4xM2gwcS4xNy0yLjU0LjE4LTUuMTR0LS4xOC01LjE0aDBBNzMuNDQsNzMuNDQsMCwwLDAsNzE0LjcyLDIwN2E3NCw3NCwwLDAsMC0xMjUuNjUsMCw3My40OSw3My40OSwwLDAsMC0xMC45NCwzMy44NmgwYy0uMTIsMS42OS0uMTgsMy40MS0uMTgsNS4xM3MuMDYsMy40NC4xOCw1LjEzaDBhNTIuMTQsNTIuMTQsMCwxLDEtNjYuMjItNTUuMjksMTEuMjcsMTEuMjcsMCwwLDEsMTQuMzMsMTAuODV2LjEyQTExLjM2LDExLjM2LDAsMCwxLDUxOCwyMTcuNzFhMjkuNDksMjkuNDksMCwwLDAsNi40Myw1Ny43NEEzMCwzMCwwLDAsMCw1NTYsMjQ5LjA4YTI5LDI5LDAsMCwwLDAtNi4xMyw5NS40OSw5NS40OSwwLDAsMSwxOC4xOS01My4yMiw5Ni42Miw5Ni42MiwwLDAsMSwxNC44OC0xNi4yMyw5Niw5NiwwLDAsMSwxMjUuNjUsMCw5Ni4yMiw5Ni4yMiwwLDAsMSwyNS44MywzNS43N0E5NS41MSw5NS41MSwwLDAsMSw3NDcuNzksMjQzLDI5LjA3LDI5LjA3LDAsMCwwLDc0Ny42MywyNDZaIiB0cmFuc2Zvcm09InRyYW5zbGF0ZSgtNDMwLjczIC0xNTAuMDcpIiBzdHlsZT0iZmlsbDogdXJsKCNhKSIvPiAgPHBhdGggZD0iTTcwNC4yMSwyNDAuODdhNTIuMTQsNTIuMTQsMCwwLDAtMTAzLjc3LDBoMHEuMTcsMi41NC4xOCw1LjE0dC0uMTgsNS4xNGgwQTczLjQ0LDczLjQ0LDAsMCwxLDU4OS41LDI4NWE3My45NCw3My45NCwwLDEsMS03Mi4zNS0xMTIuMzIsMTEsMTEsMCwwLDAsOS41Mi0xMC45aDBhMTEsMTEsMCwwLDAtMTIuMzktMTAuOTIsOTUuOTIsOTUuOTIsMCwxLDAsMTAxLDEzMS45LDUyLjE0LDUyLjE0LDAsMCwwLDg4Ljg4LTMxLjZRNzA0LDI0OC42MSw3MDQsMjQ2VDcwNC4yMSwyNDAuODdabS01MC45MiwzNC42MUEyOS40OSwyOS40OSwwLDEsMSw2ODEuNzksMjQ3LDI5LjQ5LDI5LjQ5LDAsMCwxLDY1My4yOCwyNzUuNDlaIiB0cmFuc2Zvcm09InRyYW5zbGF0ZSgtNDMwLjczIC0xNTAuMDcpIiBzdHlsZT0iZmlsbDogdXJsKCNiKSIvPiAgPHBhdGggZD0iTTgyOS42OCwyNDUuMjVhNTIuMTYsNTIuMTYsMCwwLDEtMzcuNzMsNTAuODksMTEuMzIsMTEuMzIsMCwwLDEtMTQuNC0xMC45MWgwYTExLjQsMTEuNCwwLDAsMSw4LjI5LTEwLjkxLDI5LjQ5LDI5LjQ5LDAsMCwwLTguMDgtNTcuOCwyOS44NiwyOS44NiwwLDAsMC01LjQ0LjQ2bC0uNjguMTNBMjkuODcsMjkuODcsMCwwLDAsNzQ3Ljc5LDI0M2E5NS41MSw5NS41MSwwLDAsMC03LjI0LTMzLjY4LDUyLjE0LDUyLjE0LDAsMCwxLDg5LjEzLDM2WiIgdHJhbnNmb3JtPSJ0cmFuc2xhdGUoLTQzMC43MyAtMTUwLjA3KSIgc3R5bGU9ImZpbGw6IHVybCgjYykiLz4gIDxwYXRoIGQ9Ik04NzMuNDksMjQ2YTk2LDk2LDAsMCwxLTgzLjU1LDk1LjE1LDExLDExLDAsMCwxLTEyLjM5LTEwLjkyaDBhMTEsMTEsMCwwLDEsOS41Mi0xMC45QTczLjk0LDczLjk0LDAsMSwwLDcyOS42LDE4OS43M2E5Ni42Miw5Ni42MiwwLDAsMC0xNC44OC0xNi4yM0E5NS45NSw5NS45NSwwLDAsMSw4NzMuNDksMjQ2WiIgdHJhbnNmb3JtPSJ0cmFuc2xhdGUoLTQzMC43MyAtMTUwLjA3KSIgc3R5bGU9ImZpbGw6IHVybCgjZCkiLz48L3N2Zz4=&logoWidth=30&style=for-the-badge)](https://sosc.org.in)

[![Binder](https://img.shields.io/badge/Launch-Binder-blue.svg?logo=jupyter&logoColor=white&style=for-the-badge)](https://mybinder.org/v2/gh/Hitoshirenu/VTU-Lab-Material/master)

#### The following programs can be run online on a jupyter notebook in your browser.

# Run the programs online
  - Click on the above Launch Binder or click [here](https://github.com/joemccann/dillinger/blob/master/KUBERNETES.md) and paste this repository url
  - Once inside the notebook navigate to `sem-7/computer_science/15CSL76_MACHINE_LEARNING_LABORATORY`
  - Click on one of the program files with extension `.ipynb` and run the program 
 
##### Click [here](https://www.cheatography.com/weidadeyue/cheat-sheets/jupyter-notebook/#downloads) to know about how to use a Jupyter Notebook and  [here](https://mybinder.readthedocs.io/en/latest/faq.html) to know more about Binder

## Packages and Dependencies
The following listed packages and instructions are given with assumption that you have a PC with Python2 or Python3 already installed

| Package | Documentation |
| ------ | ------ |
| Jupyter | [https://jupyter.readthedocs.io/en/latest/](https://jupyter.readthedocs.io/en/latest/) |
| Sklearn | [https://scikit-learn.org/stable/documentation.html](https://scikit-learn.org/stable/documentation.html) |
| NumPy | [http://www.numpy.org/](http://www.numpy.org/) |
| Pandas | [https://pandas.pydata.org/](https://pandas.pydata.org/) |
| Matplotlib | [https://matplotlib.org/](https://matplotlib.org/) |

## Local Installation
Run the following commands for installation on you local machine 
1. Click [here](https://github.com/Hitoshirenu/VTU-Lab-Material/archive/master.zip) to download the repository and unzip it or run the below command
```sh
$ git clone https://github.com/Hitoshirenu/VTU-Lab-Material.git
```
2. Change to the following folder ``` sem-7/computer_science/15CS76L_MACHINE_LEARNING_LABORATORY/ ``` and run 
```sh
$ cd sem-7/computer_science/15CSL_MACHINE_LEARNING_LABORATORY/
```
3. Install all the required packages
```sh
$ pip install -r requirements.txt
```
4. Run the jupyter notebook
```sh
$ jupyter notebook
```
##### Warning :warning: : The above commands consider your pip to be for Python3
## Contribution
- Fork this repository
- Download/Clone the forked repo into your local machine
- Modify/Add Contents
- Update the requirements.txt
- Push your changes
- Submit a PR 
