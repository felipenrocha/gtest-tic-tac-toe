#include "../include/velha.hpp"

JogoDaVelha::JogoDaVelha(int jogo[3][3])
{
    // Inicialização da matriz dado uma matriz como parâmetro (jogo[3][3])

    copy(&jogo[0][0], &jogo[0][0] + 3 * 3, &matriz[0][0]);
}

int JogoDaVelha::getValor(int linha, int coluna)
{
    return this->matriz[linha][coluna];
}
int JogoDaVelha::getResultado()
{
    if (jogoCheio() && !vitoriaO() && !vitoriaX())
    {
        // Caso um jogo tenha válido terminado e não exista jogador vencedor, o jogo está empatado
        return 0;
    }
    else if (vitoriaX())
    {
        return 1;
    }
    else if (vitoriaO())
    {
        return 2;
    }
}
bool JogoDaVelha::vitoria(int valor)
{
    // Função responsável para checar se o valor inteiro n é vitorioso.

    for (int i = 0; i < 3; i++)
    {
        // Checa se as colunas ou linhas possuem os valores iguais
        if (checaLinha(valor, i) || checaColuna(valor, i))
        {
            return true;
        }
    }
    // Checa se as diagonais possuem os valores iguais
    if (checaDiagonalPrincipal(valor) || checaDiagonalSecundaria(valor))
    {
        return true;
    }
    return false;
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

bool JogoDaVelha::checaLinha(int valor, int linha)
{
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
        return true;
    }
    return false;
}

bool JogoDaVelha::checaColuna(int valor, int coluna)
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
        return true;
    }
    return false;
}
/*
Os métodos checaDiagonalPrincipal e checaDiagonalSecundaria são responsáveis por checar se todos os elementos
das diagonais sao iguais dado o valor inteiro.
*/
bool JogoDaVelha::checaDiagonalPrincipal(int valor)
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
        return true;
    }
    return false;
}

bool JogoDaVelha::checaDiagonalSecundaria(int valor)
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
        return true;
    }
    return false;
}

bool JogoDaVelha::jogoCheio()
{
    /*
        Caso toda matriz possua valores 1 ou 2, o jogo está cheio/finalizado.
    */
    for (int i = 0; i < 3; i++)
    {
        // Loop pela matriz para checar se os valores são diferentes de 0.
        for (int j = 0; j < 3; j++)
        {
            if (getValor(i, j) == 0)
            {
                return true;
            }
        }
    }
    return false;
}