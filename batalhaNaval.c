#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10];

    // declarando variaveis do eixo X e Y
    int i = 0;
    int j = 0;
    //para ser legivel qual é cada linha farei uma variavel que andara de linha em linha
    int num = 0;
    // loop para acrescentar valor de um as variaveis de eixo X e Y
    printf("   A B C D E F G H I J\n");
    while (j < 10) {
        i = 0; //para sempre começar com a linha zerada
        while (i < 10) {
            tabuleiro[i][j] = 0;//transforma todos os valores em 0
            i++;
        }
        j++;
    }
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

    //vertical
    tabuleiro[3][4] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[1][4] = 3;
    //horizontal
    tabuleiro[7][5] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[7][7] = 3;

    // printar na tela
    for (i = 0; i < 10; i++) {
        printf("%d- ", num);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        num++;
        printf("\n");
    }
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
};
