#include <stdio.h>

int ehPrimo(int num);
int quantosPrimos(int x1, int y1);

int main(){
    int x, y;

    printf("Digite um numero x: ");
    scanf("%d", &x);

    printf("Digite um numero y: ");
    scanf("%d", &y);

    int quantidade = quantosPrimos(x, y);

    printf("Existem %d numeros primos entre x e y", quantidade);

}


int ehPrimo(int num){
    if(num<=1)
        return 0;

    for(int i = 2; i<num; i++){ // todo numero é divisivel por 1 e ele mesmo
        if(num % i == 0){
            return 0;
        }
    }

    return 1;
}

int quantosPrimos(int x1, int y1){
    int contPrimo = 0;
    if(x1 > y1){
        printf("Digite um x menor que y. ");
        return 0;
    }

    for(int i = x1; i<=y1; i++){
        if(ehPrimo(i)){
            contPrimo++;
        }
    }

    return contPrimo;
}