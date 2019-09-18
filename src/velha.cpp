#include "../include/velha.hpp"

JogoDaVelha::JogoDaVelha(int valor)
{

    /* Para todos elementos do array deve-se ser inicializado o valor 0,
        logo para cada linha é inserido em cada coluna (2 for's de tamanho 3)
        o valor 0.    
    */

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            setValor(valor, i, j);
        }
    }
}

void JogoDaVelha::setValor(int valor, int linha, int coluna)
{
    if (valor != 1 && valor != 2 && valor != 0)
    {
        throw invalid_argument("Valor inserido inválido! Insira 1 para 'X' ou 2 para 'O'.");
    }
    this->matriz[linha][coluna] = valor;
}
int JogoDaVelha::getValor(int linha, int coluna)
{
    return this->matriz[linha][coluna];
}
