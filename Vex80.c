#include <stdio.h>

int main(){

    int V[20];
    int maior, posicao;

        for(int i=0; i<20; i++){
            do{
                printf("V[%d] ", i);
                scanf("%d", &V[i]);

                if(V[i] <= 0){
                    printf("Valor inválido, digite apenas valores positivos.\n ");
                }
            } while(V[i] <= 0);
        }

        maior = V[0];
        posicao = 0;

        for(int i = 1; i < 20; i++){
            if(V[i] > maior){
                maior = V[i];
                posicao = i;
            }
        }
        printf("O maior valor é %d\n", maior);
        printf("Na posição: %d\n", posicao);

        return 0;
}