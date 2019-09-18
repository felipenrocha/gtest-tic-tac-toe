#ifndef __VELHA_H__
#define __VELHA_H__

#include <iostream>
#include <string>

using namespace std;

class JogoDaVelha
{
public:
    int matriz[3][3];
    JogoDaVelha(int valor);
    int getResultado();
    void setValor(int valor, int linha, int coluna);
    int getValor(int linha, int coluna);
};

#endif
