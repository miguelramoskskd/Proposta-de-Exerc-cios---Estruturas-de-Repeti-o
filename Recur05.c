#include <stdio.h>


// soma dos dois anteriores: f(n) = (n-1) + (n-2)

int fibonacci(int);

int main(){
    int n;
    printf("Termo que quer encontrar: ");
    scanf("%d", &n);
    printf("o %d termo da sequencia de fibonacci: %d", n, fibonacci(n));

}

int fibonacci(int n){
    if(n == 1 || n==2)
        return n-1;
    return fibonacci(n-1) + fibonacci(n-2);
}