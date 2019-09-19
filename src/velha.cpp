#include "../include/velha.hpp"

JogoDaVelha::JogoDaVelha(int jogo[3][3])
{

    /*Inicialização da matriz com valores 0.    
    */
    copy(&jogo[0][0], &jogo[0][0] + 3 * 3, &matriz[0][0]);
}

void JogoDaVelha::setValor(int valor, int linha, int coluna)
{

    if (valor != 1 && valor != 2)
    {
        throw invalid_argument("Valor inserido inválido! Insira 1 para 'X' ou 2 para 'O'.");
    }
    this->matriz[linha][coluna] = valor;
}
int JogoDaVelha::getValor(int linha, int coluna)
{
    return this->matriz[linha][coluna];
}
