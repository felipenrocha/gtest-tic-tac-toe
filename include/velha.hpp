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
    bool vitoria(int valor);
    bool vitoriaX();
    bool vitoriaO();
    bool jogoCheio();
    bool checaLinha(int valor, int linha);
    bool checaColuna(int valor, int coluna);
    bool checaDiagonalPrincipal(int valor);
    bool checaDiagonalSecundaria(int valor);
};

#endif
