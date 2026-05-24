#include <stdio.h>

int triangulo(int lado1, int lado2, int lado3);

int main(){
    int l1;
    int l2;
    int l3;

    printf("Digite lado 1 do triangulo:");
    scanf("%d", &l1);

    printf("Digite lado 2 do triangulo:");
    scanf("%d", &l2);

    printf("Digite lado 3 do triangulo:");
    scanf("%d", &l3);

    printf("É um triangulo %d", triangulo(l1, l2, l3));
}

int triangulo(int lado1, int lado2, int lado3){
    if(lado1<=0 || lado2<=0 || lado3<=0){
        return 0;
    }

    if(lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
        return 1;
    }

    if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        return 2;
    }


    if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
        return 3;
    }
}
