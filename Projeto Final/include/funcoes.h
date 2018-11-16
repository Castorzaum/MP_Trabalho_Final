#include <stdio.h>

typedef struct Posicao {
    int x;
    int y;
    struct Posicao *prox;
}posicao;

typedef struct Unidade_Movel {
    int vida;
    int ataque;
    int defesa;
    int alcance;
    int velocidade;
    int divisao;
    int time;
    int nivel;
    posicao local;
}unidade_movel;

typedef struct Unidade_Estatica {
    int vida;
    int ataque;
    int defesa;
    int alcance;
    int classe;
    int divisao;
    int time;
    int nivel;
    posicao local;
}unidade_estatica;

typedef struct Base_Principal {
    int vida;
}base_principal;

typedef struct Cell_Mapa {
    unidade_movel *pUniMovel;
    unidade_estatica *pUniImovel;
}cell_mapa;
