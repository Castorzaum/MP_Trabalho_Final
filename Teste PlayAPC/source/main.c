#include <playAPC/playapc.h>
#include <stdio.h>
#include "funcoes.h"
#define tam_lado 4.5

int main(){

    Ponto p;
    int x, y;

    AbreJanela(800, 800, "Jogo");
    PintarFundo(0, 0, 0);
    //MostraPlanoCartesiano(20);
    cell_mapa mapa[40][40];
    int img = AbreImagem("./grama.jpg");

    for (int i = 19; i >= -20; i--) {
        for (int j = -20; j < 20; j++) {
            p.x = j * tam_lado;
            p.y = i * tam_lado;
            CriaQuadrado(tam_lado, p);
            Pintar(255, 255, 255);
            AssociaImagem(img);
            //Desenha1Frame();
        }
    }

    while(1){
        if(ApertouBotaoMouse(GLFW_MOUSE_BUTTON_LEFT)){
            PosicaoMouse(&x, &y);
            p.x = x;
            p.y = y;
            CriaCirculo(10, p);
            Pintar(255, 0, 0);
        }

        Desenha1Frame();
    }

    Desenha();
    printf("A janela foi fechada\n");

    return 0;
}
