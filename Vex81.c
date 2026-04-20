#include <stdio.h>

int main(){

    int V[20];
    int menor, posicao;

        for(int i=0; i<20; i++){
            do{
                printf("V[%d] ", i);
                scanf("%d", &V[i]);

                if(V[i] <= 0){
                    printf("Valor inválido, digite apenas valores positivos.\n ");
                }
            } while(V[i] <= 0);
        }

        menor = V[0];
        posicao = 0;

        for(int i = 1; i < 20; i++){
            if(V[i] < menor){
                menor = V[i];
                posicao = i;
            }
        }
        printf("O menor valor é %d\n", menor);
        printf("Na posição: %d\n", posicao);

        return 0;
}