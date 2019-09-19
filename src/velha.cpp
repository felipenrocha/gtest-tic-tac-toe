#include "../include/velha.hpp"

JogoDaVelha::JogoDaVelha(int jogo[3][3])
{

    /*Inicialização da matriz com valores 0.    
    */
    copy(&jogo[0][0], &jogo[0][0] + 3 * 3, &matriz[0][0]);
}

int JogoDaVelha::getValor(int linha, int coluna)
{
    return this->matriz[linha][coluna];
}
int JogoDaVelha::getResultado()
{
    if (vitoriaX())
    {
        return 1;
    }
}

bool JogoDaVelha::vitoriaX()
{
    // Função responsável para checar se o X é vitorioso.

    for (int i = 0; i < 3; i++)
    {
        if (checaLinha(1, i) || checaColuna(1, i))
        {
            return 1;
        }
    }
    if (checaDiagonalPrincipal(1) || checaDiagonalSecundaria(1))
    {
        return 1;
    }
    return 0;
}

/*
Os métodos checaLinha e checaColuna são responsáveis por checar se todos os elementos da linha/coluna sao iguais dado
o valor inteiro.
*/

int JogoDaVelha::checaLinha(int valor, int linha)
{
    int elementoAnterior = valor;

    for (int i = 0; i < 3; i++)
    {
        if (getValor(linha, i) != elementoAnterior)
        {
            return 0;
        }
        elementoAnterior = getValor(linha, i);
    }
    return 1;
}

int JogoDaVelha::checaColuna(int valor, int coluna)
{
    int elementoAnterior = valor;

    for (int i = 0; i < 3; i++)
    {
        if (getValor(i, coluna) != elementoAnterior)
        {
            return 0;
        }
        elementoAnterior = getValor(i, coluna);
    }
    return 1;
}
/*
Os métodos checaDiagonalPrincipal e checaDiagonalSecundaria são responsáveis por checar se todos os elementos da linha/coluna sao iguais dado
o valor inteiro.
*/
int JogoDaVelha::checaDiagonalPrincipal(int valor)
{
    int elementoAnterior = valor;

    // Diagonal principal:
    for (int i = 0; i < 3; i++)
    {
        if (getValor(i, i) != elementoAnterior)
        {
            return 0;
        }
        elementoAnterior = getValor(i, i);
    }
    elementoAnterior = valor;

    return 1;
}

int JogoDaVelha::checaDiagonalSecundaria(int valor)
{
    int elementoAnterior = valor;
    // Diagonal secundária:
    for (int i = 2, j = 0; i < 3; i++, j++)
    {
        if (getValor(i, j) != elementoAnterior)
        {
            return 0;
        }
        elementoAnterior = getValor(i, j);
    }
}