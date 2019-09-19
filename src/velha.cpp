#include "../include/velha.hpp"

JogoDaVelha::JogoDaVelha(int jogo[3][3])
{

    // Inicialização da matriz com valores 0.
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
    if (vitoriaO())
    {
        return 2;
    }
}
int JogoDaVelha::vitoria(int valor)
{
    // Função responsável para checar se o valor inteiro n é vitorioso.

    for (int i = 0; i < 3; i++)
    {
        // Checa se as colunas ou linhas possuem os valores iguais
        if (checaLinha(valor, i) || checaColuna(valor, i))
        {
            return 1;
        }
    }
    // Checa se as diagonais possuem os valores iguais
    if (checaDiagonalPrincipal(valor) || checaDiagonalSecundaria(valor))
    {
        return 1;
    }
    return 0;
}

bool JogoDaVelha::vitoriaX()
{
    // Passa o valor de X para a função que analiza a vitoria de um jogo dado um valor
    if (vitoria(1))
    {
        return true;
    }
    return false;
}
bool JogoDaVelha::vitoriaO()
{
    // Passa o valor de O para a função que analiza a vitoria de um jogo dado um valor

    if (vitoria(2))
    {
        return true;
    }
    return false;
}

/*
Os métodos checaLinha e checaColuna são responsáveis por checar se todos os elementos da linha/coluna sao iguais dado
o valor inteiro.
*/

int JogoDaVelha::checaLinha(int valor, int linha)
{
    int elementoAnterior = valor;
    int quantidade = 0;

    for (int i = 0; i < 3; i++)
    {
        if (getValor(linha, i) == valor)
        {
            quantidade++;
        }
    }
    if (quantidade == 3)
    {
        return 1;
    }
    return 0;
}

int JogoDaVelha::checaColuna(int valor, int coluna)
{

    int quantidade = 0; // Variavel responsavvel para garantir que existem 3 elementos iguais na mesma linha
    for (int i = 0; i < 3; i++)
    {
        if (getValor(i, coluna) == valor)
        {
            quantidade++;
        }
    }
    if (quantidade == 3)
    {
        return 1;
    }
    return 0;
}
/*
Os métodos checaDiagonalPrincipal e checaDiagonalSecundaria são responsáveis por checar se todos os elementos
das diagonais sao iguais dado o valor inteiro.
*/
int JogoDaVelha::checaDiagonalPrincipal(int valor)
{
    int quantidade = 0;

    // Diagonal principal:
    for (int i = 0; i < 3; i++)
    {
        if (getValor(i, i) == valor)
        {
            quantidade++;
        }
    }
    if (quantidade == 3)
    {
        return 1;
    }
    return 0;
}

int JogoDaVelha::checaDiagonalSecundaria(int valor)
{
    int quantidade = 0;
    // Diagonal secundária:
    for (int i = 2, j = 0; i >= 0, j < 3; i--, j++)
    {
        if (getValor(i, j) == valor)
        {
            quantidade++;
        }
    }
    if (quantidade == 3)
    {
        return 1;
    }
    return 0;
}