#include <stdio.h>

int main(){
    int V[30];
    int X;
    int soma = 0;

    for(int i = 0; i<30; i++){
        printf("V[%d] = ", i);
        scanf("%d", &V[i]);
    }

    printf("Digite um número qualquer: ");
    scanf("%d", &X);

    for(int i = 0; i<30; i++){
        if(V[i] == X){
            soma++;
        }
    }
    printf("O numero %d apareceu %d vezes no vetor. ", X, soma);
}
