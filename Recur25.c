#include <stdio.h>

int tetranacci(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("O %d-enesimo termo da sequencia de tetranacci: %d", n, tetranacci(n));
}

int tetranacci(int n){
    if(n==0 || n==1 || n==2)
        return 0;

    if(n==3 || n==4)
        return 1;

    return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
}