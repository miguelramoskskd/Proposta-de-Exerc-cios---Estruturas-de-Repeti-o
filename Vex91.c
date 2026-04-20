#include <stdio.h>

int main(){
    int VET[50];
    int encontrou = 0;

    for(int i = 0; i<50; i++){
        printf("VET[%d]", i);
        scanf("%d", &VET[i]);
    }

    for(int i = 0; i<50; i++){ // ELEMENTO POSICAO I
        for(int j = i+1; j<50; j++){ // COMPARA ELEMENTO DA POSICAO I COM O PROXIMO
            if(VET[i] == VET[j]){
                encontrou++;
                printf("Repeticao encontrada: V[%d]: %d e V[%d]: %d\n", i, VET[i], j, VET[j]);
            } 
        }
    }

    if(encontrou == 0){
        printf("Nao há repetidos. ");
    }

    return 0;
}