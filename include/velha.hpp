#ifndef __VELHA_H__
#define __VELHA_H__

#include <iostream>
#include <string>

using namespace std;

class JogoDaVelha
{
public:
    int matriz[3][3];
    JogoDaVelha(int jogo[3][3]);
    int getValor(int linha, int coluna);
    int getResultado();
    bool vitoriaX();
    int checaLinha(int valor, int linha);
    int checaColuna(int valor, int coluna);
    int checaDiagonalPrincipal(int valor);
    int checaDiagonalSecundaria(int valor);
};

#endif
