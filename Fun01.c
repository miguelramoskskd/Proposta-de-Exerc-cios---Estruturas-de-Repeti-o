#include <stdio.h>
#include <string.h>

int main(){
    int n1, n2;
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);

    printf("Resultado = %d", multiplica(n1, n2));
}

int multiplica(int n1, int n2){

    int contResultado = 0;
    int negativo = 0;
    
    if(n1 < 0){
        negativo = !negativo;
        n1 = -n1;
    }

    if(n2 < 0){
        negativo = !negativo;
        n2 = -n2;
    }

    for(int i = 0; i<n2; i++){
        contResultado = contResultado + n1;
    }

    if(negativo)
        contResultado = -contResultado;

    return contResultado;
}