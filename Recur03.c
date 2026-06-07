#include <stdio.h>

int somaCubo(int);

int main(){
    int n1;
    printf("N1: ");
    scanf("%d", &n1);
    printf("A soma dos %d primeiros cubos eh: %d", n1, somaCubo(n1));

}

int somaCubo(int n){
    if(n == 1)
        return 1;
    return somaCubo(n-1)+(n*n*n);
}