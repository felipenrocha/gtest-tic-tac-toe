#ifndef __VELHA_H__
#define __VELHA_H__

#include <iostream>
#include <string>

using namespace std;

class JogoDaVelha
{
protected:
    int jogo[3][3];
    int transformValor(char valor);

public:
    int getResultado();
    void insereValor(char valor, int linha, int coluna);
    char getValor(int linha, int coluna);
    JogoDaVelha();
};

#endif
