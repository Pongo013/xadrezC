#include <stdio.h>

int main() {
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
}