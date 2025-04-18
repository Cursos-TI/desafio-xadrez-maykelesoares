#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível - Novato

int main() {
    
// mover a torre 5 casas a direita;
    printf("TORRE \n");

    //valor de torre é 0, e enquanto for menor que 5 será incrementado ++ e imprimir;
    for(int torre = 0; torre < 5; torre++){        
        printf("Direita \n");
    }

//mover o bispo 5 casas na diagonal (cima,esquerda);
    int bispo = 0;
    
    printf("BISPO \n");    
    
    //enquanto o valor de bispo for menor que 5, incrementa +1 ao valor de bispo e imprimir a direção;
    while(bispo < 5){
        bispo++;        
        printf("Cima, Direita \n");
    }

//mover rainha 8 casas para a esquerda;
   int rainha = 0;

   printf("RAINHA \n");
    //primeiro imprime a direção, depois incrementa 1 ao valor da rainha enquanto o valor for menor que 8;
   do
   {
    printf("Esquerda \n");
    rainha++;
   } while (rainha < 8);      
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
