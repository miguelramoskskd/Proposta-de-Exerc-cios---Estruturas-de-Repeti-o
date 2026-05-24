#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Seu fatorial: %d", fatorial(n));
}

int fatorial(int num){
    int fat = 1;

    for(int i = 1; i<=num; i++){
        fat = fat * i;
    }

    return fat;
}