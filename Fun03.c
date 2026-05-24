#include <stdio.h>

int main(){
    int n1, n2;
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    printf("Resultado = %d", potencia(n1, n2));
}

int potencia(int n1, int n2){
    int resultado = 1;

    if(n2 == 0){
        return 1;
    }

    for(int i = 0; i<n2; i++){
        resultado = resultado * n1;
    }
    return resultado;
}

