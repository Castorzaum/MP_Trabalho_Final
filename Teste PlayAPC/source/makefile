GOOGLE_TEST_LIB = gtest
GOOGLE_TEST_INCLUDE = /usr/local/include

IDIR =../include
CC=g++
CCPLUS=g++	
CFLAGS=-I $(IDIR) -g
G_FLAGS=-I $(IDIR) -I $(GOOGLE_TEST_INCLUDE) -g -ftest-coverage -fprofile-arcs
LD_FLAGS=-I $(IDIR) -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread -g -ftest-coverage -fprofile-arcs

ODIR=obj
LDIR =../lib

LIBS=-lm -lplayAPC

_DEPS = funcoes.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o funcoes.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_OBJT = testa_main.o funcoes.o
OBJT = $(patsubst %,$(ODIR)/%,$(_OBJT))

all: jogo testa_jogo

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CCPLUS) -c -o $@ $< $(G_FLAGS)

jogo: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

testa_jogo: $(OBJT)
	$(CCPLUS) -o $@ $^ $(LD_FLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
