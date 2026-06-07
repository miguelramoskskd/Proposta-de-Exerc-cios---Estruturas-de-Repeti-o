#include <stdio.h>

int tribonacci(int);

int main(){
    int n;
    printf("A posição do termo da sequencia de tribonaci que quer encontrar: ");
    scanf("%d", &n);
    printf("O %d termo da sequencia eh: %d", n, tribonacci(n));
}

int tribonacci(int n){
    if(n==0)
        return 0;
    
    if(n==1)
        return 0;

    if(n==2)
        return 1;

    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}