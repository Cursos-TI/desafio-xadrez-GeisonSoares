#include <stdio.h>

int main() 
{
    // Movimentação da Torre (5 casas para a direita) usando FOR
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) 
    {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal superior direita) usando WHILE
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) 
    {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimentação da Rainha (8 casas para a esquerda) usando DO-WHILE
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do 
    {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimentação do Cavalo (2 casas para baixo, 1 para a esquerda) usando loops aninhados for e while
    printf("\nMovimento do Cavalo:\n");

    for (int m = 1; m <= 2; m++) 
    { 
        printf("Baixo\n");

        int n = 0;
        while (n < 1 && m == 2) 
        { 
            printf("Esquerda\n");
            n++;
        }
    }
    return 0;
}