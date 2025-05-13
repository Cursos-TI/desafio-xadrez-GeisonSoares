#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita de forma linear
void moverTorre(int casas) 
{
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo na diagonal superior direita
void moverBispoComRecursividadeELoop(int linha, int maximo) 
{
    if (linha >= maximo) return;

    // Loop interno representa o deslocamento para a direita
    for (int coluna = linha; coluna <= linha; coluna++)
    {
        printf("Cima, Direita\n"); 
    }

    // Chamada recursiva para a próxima linha
    moverBispoComRecursividadeELoop(linha + 1, maximo);
}

// Função recursiva para movimentar a Rainha para a esquerda de forma linear
void moverRainha(int casas) 
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() 
{
    // Movimento da Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

     printf("\nMovimento do Bispo (Recursividade + Loop Interno):\n");
    moverBispoComRecursividadeELoop(0, 5);

    // Movimento da Rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

     printf("\nMovimento do Cavalo (2 casas para cima, 1 para a direita):\n");

    for (int i = 0; i < 1; i++) // loop externo de controle 
    {  
        for (int cima = 0, direita = 0; cima <= 2; cima++) 
        {

            if (cima < 2) 
            {
                printf("Cima\n");
                continue;
            }

            // Quando cima == 2, move para a direita
            if (direita < 1) 
            {
                printf("Direita\n");
                break; // encerra o movimento após um L
            }
        }
    }
    
    return 0;
}