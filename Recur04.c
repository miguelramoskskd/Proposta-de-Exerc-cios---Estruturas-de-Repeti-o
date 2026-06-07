#include <stdio.h>

int potencia(int, int);

int main(){
    int k, n;
    printf("Digite valor de k:");
    scanf("%d", &k);
    printf("Digite valor de n:");
    scanf("%d", &n);
    printf("O resultado eh %d", potencia(k, n));
    
}

int potencia(int k, int n){
    if(n == 0)
        return 1;
    return k * potencia(k, n-1);

}
