#include <stdio.h>
// 0! = 1
// 1! = 1
// 2! = 1 x 2
// 3! = 1 x 2 x 3

int fatorial(int);

int main(){
    int n1;
    printf("N2: ");
    scanf("%d", &n1);
    printf("Fatorial de %d eh %d", n1, fatorial(n1));
}

int fatorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n*fatorial(n-1);
}