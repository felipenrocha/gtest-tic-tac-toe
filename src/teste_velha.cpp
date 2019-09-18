#include <gtest/gtest.h>
#include "../include/velha.hpp"

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(JogoDaVelhaTeste, CriaTeste)
{
    JogoDaVelha jogo;
    
}
TEST(JogoDaVelhaTeste, InsereValor)
{
    JogoDaVelha jogo;
    jogo.insereValor('x',1,1);


}
