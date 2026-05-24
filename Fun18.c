#include <stdio.h>

int soma(int x);

int main(){
    int n;

    do{
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while(n < 0);

    printf("A soma de 1 ate %d eh %d", n, soma(n));
}

int soma(int x){
    int cont = 0;

    for(int i = 1; i<= x; i++){
        cont = cont + i;
    }

    return cont;
}