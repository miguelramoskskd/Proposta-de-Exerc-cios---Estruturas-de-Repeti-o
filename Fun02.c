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
    int resultado = 0;
    int negativo = 0;

    if(n2 == 0){
        printf("Erro, divisao por zero. ");
        return 0;
    }

    if(n2<0){
        negativo = !negativo;
        n2 = -n2;
    }

     if(n1<0){
        negativo = !negativo;
        n1 = -n1;
    }

    while(n1 >= n2){
        n1 = n1 - n2;
        resultado++;
    }

    if(negativo)
        resultado = -resultado;

    return resultado;

}

