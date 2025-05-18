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

    
    // Simulação do movimento do Cavalo
    
    printf("\nMovimento do Cavalo:\n");

    // Variáveis para o movimento do Cavalo
    int movimentosParaBaixo = 2;
    int movimentosParaEsquerda = 1;

    // Loop externo (obrigatoriamente for) para as duas casas para baixo
    for (int k = 1; k <= movimentosParaBaixo; k++) {
        printf("Baixo\n");

        // Loop interno (escolha: while) para uma casa para a esquerda
        int l = 1;
        while (l <= movimentosParaEsquerda) {
            printf("Esquerda\n");
            l++;
        }
    }

    return 0;
}
