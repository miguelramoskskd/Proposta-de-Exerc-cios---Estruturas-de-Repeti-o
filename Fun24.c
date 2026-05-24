#include <stdio.h>

int combinar(int n, int r);
int fatorial(int num);

int main(){
    int n;
    int r;
    printf("Digite N: ");
    scanf("%d", &n);

    printf("Digite R: ");
    scanf("%d", &r);

    printf("O numero de combinações é %d", combinar(n, r));

}

int combinar(int n, int r){
    int combinacao;
    combinacao = fatorial(n) / (fatorial(r) * fatorial(n-r));
    return combinacao;
}

int fatorial(int num){
    int fat = 1;

    for(int i = 1; i<=num; i++){
        fat = fat * i;
    }

    return fat;
}