#include <stdio.h>

int main(){
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    printf("Numero invertido: %d", inverso(n));
}

int inverso(int num){
    int invertido = 0;
    while(num > 0){
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num = num / 10;
    }

    return invertido;
}