#include <stdio.h>

int main(){
    int V[20];
    int X;
    int V2[20];
    int tamanhoV2 = 0; // indice j
    int encontrado = 0;


    for(int i = 0; i<20; i++){
        printf("V[%d] = ", i);
        scanf("%d", &V[i]);
    }

    printf("Seu vetor:\n");
    for(int i = 0; i<20; i++){
        printf("V[%d] = %d\n", i, V[i]);
    }

    printf("Digite um numero qualquer: ");
    scanf("%d", &X);

    for(int i = 0; i<20; i++){
        if(V[i] == X){ // SE O NUMERO FOR IGUAL AO X (ou seja, se x existe no vetor)
            encontrado = 1;
        } else { // SE O NUMERO NÃO FOR IGUAL A X (ou seja, x não existe no vetor)
            V2[tamanhoV2] = V[i]; // manter mesmo vetor
            tamanhoV2++; // PULA NUMERO
        }
    }

    if(encontrado == 1){
        printf("\nO novo vetor sem o numero %d:\n", X);
        for(int i = 0; i < tamanhoV2; i++){
            printf("V2[%d] = %d\n", i, V2[i]);
        }
    } else {
        printf("O numero nao existe no vetor.\n");
    }


    return 0;

}