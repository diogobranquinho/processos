# Sobre Processos
Criando processos em diferentes situações
- Linux - fork
- Python - fork
- Windows - CreateProcess

## Linux C
Para compilar o código C no Linux, utilizar o terminal na pasta do código

````sh
gcc -o process process.c
#para executar
./process
````
Caso aconteça algum erro na compilação em relação as bibliotecas <sys/types.h> ou <stdio.h> você deve instalar o conjunto de bibliotecas essenciais do Linux com os seguintes comandos

````sh
sudo apt-get update
sudo apt-get install build-essential
````

## Python
Instalar o Python na versão 3

````sh
python3 process.py
````

## Windows C
Utilizar o Code::Blocks ou Dev-C++ como IDEs para manipulação e compilação do código-fonte

