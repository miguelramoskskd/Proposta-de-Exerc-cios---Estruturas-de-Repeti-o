#include <stdio.h>

float serie(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("S = %.2f ", serie(n));
}

float serie(int n){
    if(n == 1)
        return 2;

    return ((1 + n*n) / n) + serie(n-1);
}