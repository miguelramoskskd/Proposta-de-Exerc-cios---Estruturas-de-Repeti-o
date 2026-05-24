#include <stdio.h>

int menorInteiro(int n);

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Resultado: %d\n", menorInteiro(numero));
}

int menorInteiro(int n){
    int i = 1;

    while(i*i <= n){
        i++;
    }

    return i;
}

