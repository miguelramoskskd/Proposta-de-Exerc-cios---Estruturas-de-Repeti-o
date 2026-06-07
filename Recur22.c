#include <stdio.h>

int fibg(int, int, int);

int main(){
    int f0, f1, n;
    printf("Primeiro numero da sequencia: ");
    scanf("%d", &f0);
    printf("Segundo numero da sequencia: ");
    scanf("%d", &f1);
    printf("Posicao do termo que quero encontrar: ");
    scanf("%d", &n);

    printf("Termo de posição %d: %d ", n, fibg(f0, f1, n));
}

int fibg(int f0, int f1, int n){
    if(n==0)
        return f0;
    
    if(n==1)
        return f1;

    return fibg(f0, f1, n-1) + fibg(f0, f1, n-2);
}