#include <stdio.h>
 
int main() {

    int tabuleiro[10][10];

    //Informar que tabuleiro é valor 0   
    for (int i = 0; i < 10; i++){   
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;      // 0 = valor para agua  
        }
    }

    // Navio horizontal
    tabuleiro[0][7] = 3;  // 3 valor para o lugar que está o navio
    tabuleiro[0][8] = 3;
    tabuleiro[0][9] = 3;

    // Navio vertical
    tabuleiro[4][3] = 3;
    tabuleiro[5][3] = 3;
    tabuleiro[6][3] = 3;
    tabuleiro[7][3] = 3;

    for (int i = 0; i < 10; i++){   
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);   // tabuleiro com os navios 
        }
        printf("\n"); //espaço entre os valores
    }

    return 0;
}


 // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
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