#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento do Bispo (5 casas na diagonal para cima e direita)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}