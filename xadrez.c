#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Torre para Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {//precisa ser feito com loop aninhado
    if (casas > 0) {
        int var = casas % 2;
        for (int c = casas; c % 2 == var; c++) {
            for (int d = casas; d % 2 == var; d++) {
                printf("Bispo para Direita\n");
            }
            printf("Bispo para Cima\n");
        }
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha para Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    printf("=== Movimentação da Torre:\n");
    moverTorre(5);
    printf("=== Movimentação do Bispo:\n");
    moverBispo(5);
    printf("=== Movimentação da Rainha:\n");
    moverRainha(8);
    printf("=== Movimentação do Cavalo:\n");
    for (int c = 0, d = 0; c <= 1 && d < 1; c++) {
        //a verificação do "c" é <= 1, pois ele é iniciado em 0. ou seja, o loop irá executar o comando quando "c" for 0 e 1.
        printf("Cavalo para Cima\n");
        for (d; c == 1 && d < 1; d++) {
            //a verificação é se c == 1, pois quando "c" andar as duas casas, seu valor será 1, e "d" poderá mover para o lado
            printf("Cavalo para Direita\n");
        }
    }
    return 0;
}