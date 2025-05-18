#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas, int contador) {
    if (contador > casas) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas, contador + 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas, int contador) {
    if (contador > casas) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casas, contador + 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas, int contador) {
    if (contador > casas) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas, contador + 1);
}

// Função para simular o movimento do Cavalo com loops aninhados
void moverCavalo() {
    int i, j;
    // Loop para o movimento para cima (2 casas)
    for (i = 1; i <= 2; i++) {
        printf("Cima\n");

        // Loop para o movimento para a direita (1 casa)
        for (j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
    }
}

int main() {
    // Variáveis para controlar o número de casas a serem movidas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Simulação do movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 1); // Chamando a função recursiva para a Torre
    printf("\n");

    // Simulação do movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, 1); // Chamando a função recursiva para o Bispo
    printf("\n");

    // Simulação do movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha, 1); // Chamando a função recursiva para a Rainha
    printf("\n");

    // Simulação do movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Chamando a função para o movimento do Cavalo
    printf("\n");

    return 0;
}
