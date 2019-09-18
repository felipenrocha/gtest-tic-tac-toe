#include <gtest/gtest.h>
#include "../include/velha.hpp"

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
TEST(JogoDaVelhaTeste, setAndGetValor)
{
    JogoDaVelha jogo(0); // Jogo inicializado com todos elementos 0.   
    jogo.setValor(1, 1, 1);
    ASSERT_EQ(1, jogo.getValor(1, 1));
    jogo.setValor(2,1,2);
    ASSERT_EQ(2,jogo.getValor(1,2));
}

TEST(JogoDaVelhaTeste, CriaTeste)
{
    JogoDaVelha jogo(0);
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; i <= 3; i++)
        {
            ASSERT_EQ(0, jogo.getValor(i, j));
        }
    }
}
