#include <gtest/gtest.h>
#include "../include/velha.hpp"

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
TEST(JogoDaVelhaTeste, CriaJogo)
{
    // Teste responsável para garantir a inicialização do jogo.
    int jogoTeste[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};
    JogoDaVelha jogo(jogoTeste);
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; i <= 2; i++)
        {
            // Teste que todos os elementos da matriz foram inicializados conforme o jogoTeste(valor = 0);
            ASSERT_EQ(0, jogo.matriz[i][j]);
        }
    }
}
TEST(JogoDaVelhaTeste, getValor)
{
    // Teste para garantir que a função getValor(int linha, int coluna) funcione corretamente.
    // Obs.: linhas e colunas começam em 0
    int jogoTeste[3][3] = {
        {1, 2, 0},
        {1, 100, 2},
        {3, 0, -1}};
    JogoDaVelha jogo(jogoTeste);
    ASSERT_EQ(1, jogo.getValor(0, 0)); // Linha 1 coluna 1 = 1
    ASSERT_EQ(2, jogo.getValor(0, 1)); // Linha 1 coluna 2 = 2
    ASSERT_EQ(0, jogo.getValor(0, 2)); // Linha 1 coluna 3 = 0

    ASSERT_EQ(1, jogo.getValor(1, 0));   // Linha 2 coluna 1 = 1
    ASSERT_EQ(100, jogo.getValor(1, 1)); // Linha 2 coluna 2 = 100
    ASSERT_EQ(2, jogo.getValor(1, 2));   // Linha 2 coluna 3 = 2

    ASSERT_EQ(3, jogo.getValor(2, 0));  // Linha 3 coluna 1 = 3
    ASSERT_EQ(0, jogo.getValor(2, 1));  // Linha 3 coluna 2 = 0
    ASSERT_EQ(-1, jogo.getValor(2, 2)); // Linha 3 coluna 3 = -1
}

TEST(JogoDaVelhaTeste, VencedorX)
{
    // Espera-se que caso o vencedor do jogo seja o X(1), a função retorne 1.
    // Linha com X
    int jogoTeste1[3][3] = {
        {1, 1, 1},
        {2, 2, 0},
        {0, 0, 0}};
    JogoDaVelha jogo1(jogoTeste1);
    ASSERT_EQ(1, jogo1.getResultado());

    // Coluna com X
    int jogoTeste2[3][3] = {
        {0, 1, 0},
        {2, 1, 0},
        {2, 1, 0}};
    JogoDaVelha jogo2(jogoTeste2);
    ASSERT_EQ(1, jogo2.getResultado());

    // Diagonais com X:
    // Principal:
    int jogoTeste3[3][3] = {
        {1, 0, 0},
        {2, 1, 0},
        {2, 0, 1}};
    JogoDaVelha jogo3(jogoTeste3);
    ASSERT_EQ(1, jogo3.getResultado());
    // Secundária:
    int jogoTeste4[3][3] = {
        {0, 2, 1},
        {2, 1, 0},
        {1, 0, 0}};
    JogoDaVelha jogo4(jogoTeste4);
    ASSERT_EQ(1, jogo4.getResultado());
}

TEST(JogoDaVelhaTeste, VencedorO)
{
    // Espera-se que caso o vencedor do jogo seja o O(2), a função retorne 2s.
    // Linha com O
    int jogoTeste1[3][3] = {
        {1, 1, 0},
        {2, 2, 2},
        {0, 1, 0}};
    JogoDaVelha jogo1(jogoTeste1);
    ASSERT_EQ(2, jogo1.getResultado());

    // Coluna com O
    int jogoTeste2[3][3] = {
        {0, 2, 0},
        {1, 2, 1},
        {1, 2, 0}};
    JogoDaVelha jogo2(jogoTeste2);
    ASSERT_EQ(2, jogo2.getResultado());


    // Diagonais com O:

    // Principal:
    int jogoTeste3[3][3] = {
        {2, 0, 1},
        {1, 2, 0},
        {1, 0, 2}};
    JogoDaVelha jogo3(jogoTeste3);
    ASSERT_EQ(2, jogo3.getResultado());
    
    // Secundária:
    int jogoTeste4[3][3] = {
        {0, 1, 2},
        {1, 2, 0},
        {2, 0, 0}};
    JogoDaVelha jogo4(jogoTeste4);
    ASSERT_EQ(2, jogo4.getResultado());
}