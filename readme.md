Trabalho 2 - Métodos em Programação - 201600

Aluno: Felipe Nascimento Rocha - 17/0050084

Professor: Jan Mendonça Correa

Sistema Operacional: Ubuntu 18.04

Compilador: gcc/g++ (7.4.0)

Linguagem: C++11

Framework de teste: gtest

    - Instruções para instalação do gtest:

        $ sudo apt-get install libgtest-dev

        $ sudo apt-get install cmake

        $ cd /usr/src/gtest

        $ sudo cmake CMakeLists.txt

        $ sudo make

        $ sudo cp *.a /usr/lib

Obs.: Ao clonar o repositório não é incluso o diretorio src/obj que é necessário para compilação, certifique-se de que o diretório é criado:

    - Dentro do diretorio principal:
        - $ mkdir src/obj
     



    - Instruções de compilação com Makefile:

        - Compilar o teste:
            - Dentro do diretório src no terminal:
             - $ make velha
                - Para executar, basta utilizar o comando:
                    - $  ./velha
        - $ make .PHONY
            - Remove os objetos da compilação;

Executar com Valgrind: 

    - Após comipalação: rodar comando no terminal dentro do diretório src:
    
        $ valgrind ./velha
        
    
   Trabalho 2 - Métodos em Programação - 201600
