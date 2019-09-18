IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib
#LIBS DO GTEST
LIBS=-lm -Wall -g -pthread -lgtest_main -lgtest -lpthread
## ARQUIVO PARA RODAR OS TESTES:
MAIN = teste_velha.cpp
 


## Para compilar com a pilha vetor ou lista basta comentar/descomentar as bibiliotecas que serão utilizadas no arquivo teste_pilha.
#  Regras para vetor:


_DEPS= velha.hpp # ou pilha_lista.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
_OBJ =  velha.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)




## default: make vetor
Velha:$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(MAIN) $(LIBS)
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 