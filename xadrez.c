#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando for
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal cima-direita usando while
    int casasBispo = 5;
    int i = 0;
    printf("Movimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda usando do-while
    int casasRainha = 8;
    int j = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);
    printf("\n");

    return 0;
}
