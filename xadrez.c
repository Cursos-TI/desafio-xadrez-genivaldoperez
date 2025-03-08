#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes que determinam a quantidade de casas usadas no movimento
#define BISPO 5
#define TORRE 5
#define RAINHA 8
#define CAVALO 2

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int movimento_bispo = 0;
    printf("Movimento do Bispo:\n");
    while (movimento_bispo < BISPO)
    {
        printf("Diagonal (para cima e direita)\n");
        movimento_bispo++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < TORRE; i++)
    {
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int movimento_rainha = 0;
    printf("\nMovimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        movimento_rainha++;
    } while (movimento_rainha < RAINHA);

    printf("\n_______________________________________________________________________________________________________________________\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < CAVALO; i++)
    {
        int j = 1;
        printf("Baixo\n");
        while (j == i)
        {
            printf("Esquerda\n");
            j++;
        }
        
    }
    


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
