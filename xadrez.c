#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível - Mestre;
    
//substituir os loops por funções recursivas;
//loops complexos para o cavalo : loops aninhados e condições  (duas casas para cima e uma para direita);
//bispo com loops aninhados, loop externo para movimento vertical e  loop interno para movimento horizontal;
//definir o numero de casas atraves de variáveis;

// função recursiva; 
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre( casas - 1); // a cada execução reduz o valor de "casas" em 1, até chegar no caso-base;
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha( casas - 1); // a cada execução reduz o valor de "casas" em 1, até chegar no caso-base;
    }
}

// movimentação do bispo com loops aninhados,
void moverBispo(int casas){
    if (casas > 0){
        int vertical = 1;
        while (vertical <= 1){
            printf("Cima, ");
            int horizontal = 1;
            while (horizontal <= 1)
            {
                printf("Esquerda");
                horizontal++;
            }
            printf("\n");
            vertical++;        
        }
        moverBispo( casas - 1);
    }
}

// movimentação do cavalo com loop avançado;
void moverCavalo( int casas){
    if ( casas > 0){
        int horizontal, vertical;    //cima e direita

        for(horizontal = 1; horizontal <= 1; horizontal++){ // 1 casa para direita

        
        for(vertical = 1; vertical <= 2; vertical++){  //2 casas para cima
            
            printf("\n Cima \t");
            
        }
        printf("Direita \n");
        }
        moverCavalo( casas - 1);

    }
}


int main() {
// mover a torre 5 casas a direita;
    printf("TORRE \n");

    moverTorre(5);

//mover o bispo 5 casas na diagonal (cima,esquerda);
        
    printf("BISPO \n");    

    moverBispo(5);
    
//mover rainha 8 casas para a esquerda;
   
   printf("RAINHA \n");
    
   moverRainha(8);


   // movimento do cavalo : duas casas para cima e uma para a direita

    printf("CAVALO\n");


    moverCavalo(1);

    return 0;
}
