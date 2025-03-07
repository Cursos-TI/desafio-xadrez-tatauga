#include <stdio.h>

// Definindo constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5   // casas na diagonal superior direita
#define MOVIMENTO_TORRE 5    // casas para a direita
#define MOVIMENTO_RAINHA 8   // casas para a esquerda

// Implementação da Movimentação do Bispo
void mover_bispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Bispo se moveu %d casas na diagonal superior direita.\n", i);
    }
}

// Implementação de Movimentação da Torre
void mover_torre() {
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Torre se moveu %d casas para a direita.\n", i);
    }
}

// Implementação de Movimentação da Rainha
void mover_rainha() {
    printf("\nMovimentação da Rainha:\n");
    for (int i = 1; i <= MOVIMENTO_RAINHA; i++) {
        printf("Rainha se moveu %d casas para a esquerda.\n", i);
    }
}

int main() {
    // Chamando as funções de movimentação
    mover_bispo();
    mover_torre();
    mover_rainha();

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

