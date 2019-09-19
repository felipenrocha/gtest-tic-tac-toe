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
    // Obs.: linhas e colunas começam em 0
    int jogoTeste[3][3] = {
        {1, 2, 0},
        {1, 100, 2},
        {3, 0, -1}};
    JogoDaVelha jogo(jogoTeste);
    ASSERT_EQ(1, jogo.getValor(0, 0)); // Linha 1 coluna 1 = 1
    ASSERT_EQ(2, jogo.getValor(0, 1)); // Linha 1 coluna 2 = 2
    ASSERT_EQ(0, jogo.getValor(0, 2)); // Linha 1 coluna 3 = 0

    ASSERT_EQ(1, jogo.getValor(1, 0));      // Linha 2 coluna 1 = 1
    ASSERT_EQ(100, jogo.getValor(1, 1));    // Linha 2 coluna 2 = 100
    ASSERT_EQ(2, jogo.getValor(1, 2));      // Linha 2 coluna 3 = 2

    ASSERT_EQ(3, jogo.getValor(2, 0));  // Linha 3 coluna 1 = 3
    ASSERT_EQ(0, jogo.getValor(2, 1));  // Linha 3 coluna 2 = 0
    ASSERT_EQ(-1, jogo.getValor(2, 2)); // LInha 3 coluna 3 = -1
}
