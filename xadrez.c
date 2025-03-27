#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Torre para Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {//precisa ser feito com loop aninhado
    if (casas > 0) {
        for (int c = 0; c < casas; c++) {
            for (int d = 0; d < casas; d++) {
                printf("Bispo para Direita\n");
            }
            printf("Bispo para Cima\n");
        }
    }
}

void moverRainha(int casas) {

}

int main() {
    printf("=== Movimentação da Torre:\n");
    moverTorre(5);
    printf("=== Movimentação do Bispo:\n");
    moverBispo(5);
    printf("=== Movimentação da Rainha:\n");
    moverRainha(8);
    printf("=== Movimentação do Cavalo:\n");
    //movimento do cavalo é pra ser recursivo, mas usa loops aninhacos com multiplas variaveis/condicoes
    return 0;

    /*
    //movimento da torre
    printf("=== Movimento da torre:\n");
    for (int t = 0; t < 5; t++) {
        printf("Torre para Direita\n");
    }
    //movimento do bispo
    printf("=== Movimento do bispo:\n");
    for (int b = 0; b < 5; b++) {
        printf("Bispo para Cima e Direita\n");
    }
    //movimento da rainha
    printf("=== Movimento da Rainha:\n");
    for (int r = 0; r < 8; r++) {
        printf("Rainha para Esquerda\n");
    }
    //movimento do cavalo
    printf("=== Movimento do Cavalo:\n");
    for (int c = 0; c < 1; c++) {
        for (c; c < 2; c++) {
            printf("Cavalo para Baixo\n");
        }
        printf("Cavalo para Esquerda\n");
    }
    */
}