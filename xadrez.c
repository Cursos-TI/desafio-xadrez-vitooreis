#include <stdio.h>

int main() {
    // Variável para controlar o movimento da Torre
    int casasTorre = 5;

    // Simulação do movimento da Torre
    printf("Movimento da Torre:\n");
    // Torre move 5 casas para a direita (usando o laço for)
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    // Bispo move 5 casas na diagonal superior direita (usando o laço while)
    int i = 1;
    while (i <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Simulação do movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    // Rainha move 8 casas para a esquerda (usando o laço do-while)
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);

    return 0;
}
