#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(ehPrimo(n)){
        printf("Primo");
    } else{
        printf("Nao eh Primo");
    }
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