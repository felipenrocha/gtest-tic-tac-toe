#include "../include/velha.hpp"

JogoDaVelha::JogoDaVelha()
{

    /* Para todos elementos do array deve-se ser inicializado o valor 0,
        logo para cada linha é inserido em cada coluna (2 for's de tamanho 3)
        o valor 0.    
    */

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            insereValor(0, i, j);
        }
    }
}

void JogoDaVelha::insereValor(char valor, int linha, int coluna)
{
    if (valor != 'X' || valor != 'x' || valor != 'o' || valor != 'O' || valor != 0)
    {
        throw invalid_argument("Valor inserido inválido! Insira 'X' ou 'O' para jogar.");
    }
    this->jogo[linha][coluna] = transformValor(valor);
}
int JogoDaVelha::getValor(int linha, int coluna)
{
    return this->jogo[linha][coluna];
}

int JogoDaVelha::transformValor(char valor)
{
    switch (valor)
    {
    case ('x' || 'X'):
        return 1;
        break;
    case ('o' || 'O'):
        return 2;
        break;
    default:
        return 0;
        break;
    }
}