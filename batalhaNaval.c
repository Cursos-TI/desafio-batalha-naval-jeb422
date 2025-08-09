#include <stdio.h>

#define tamanho 10
#define agua 0
#define navio1 3
#define navio2 4

int main() {

    int tabuleiro[tamanho][tamanho];

    //Informar que tabuleiro é valor 0   
    for (int i = 0; i < tamanho; i++){   
        for (int j = 0; j < tamanho; j++){
            tabuleiro[i][j] = agua;      // 0 = valor para agua  
        }
    }

    // Navio horizontal
    int linha = 5, coluna = 0;
    for (int i = 0; i < navio1; i++)  {
            tabuleiro[linha][coluna + i] = navio1;      
    }
    

    // Navio vertical
    int linha3 = 0, coluna3 = 7;
    for (int j = 0; j < navio2; j++)  {
            tabuleiro[linha3 + j][coluna3] = navio2;      
    }

    // Navio diagonal

    int linha1 = 2, coluna1 = 2;
    if (linha1 + navio1 <= tamanho && coluna1 + navio1 <= tamanho) {
        for (int i = 0; i < navio1; i++)  {
            tabuleiro[linha1 + i][coluna1 + i] = navio1;
        }
        
    }
    int linha2 = 4, coluna2 = 8;
    if (linha2 + navio2 <= tamanho && coluna2 - (navio2 - 1) >= 0) {
        for (int i = 0; i < navio2; i++)  {
            tabuleiro[linha2 + i][coluna2 - i] = navio2;
        }
        
    }
    
    printf("---Batalha Naval---\n");

    for (int i = 0; i < tamanho; i++){   
        for (int j = 0; j < tamanho; j++){
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