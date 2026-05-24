#include <stdio.h>

int divisor(int n);

int main(){
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    printf("\nOs divisores desse numero são:");
    divisor(n);

}

int divisor(int n){
    for(int i = 1; i<=n; i++){
        if(n % i == 0){
            printf("\t%d", i);
        }
    }
}