#include <stdio.h>

int main() {
    const int CASAS_BISPO = 5;
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;
    int i;

    printf("--- Desafio de Xadrez da MateCheck - Nível Novato ---\n");

    printf("\n--- Movimentação do Bispo (%d casas na diagonal superior direita) ---\n", CASAS_BISPO);
    for (i = 0; i < CASAS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n--- Movimentação da Torre (%d casas para a direita) ---\n", CASAS_TORRE);
    for (i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n--- Movimentação da Rainha (%d casas para a esquerda) ---\n", CASAS_RAINHA);
    for (i = 0; i < CASAS_RAINHA; i++) {
        printf("Esquerda\n");
    }
    
    printf("\n--- Simulação do Nível Novato Concluída ---\n");

    return 0;
}
