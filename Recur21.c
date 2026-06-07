#include <stdio.h>

int F(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("%d", F(n));

}

int F(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    
    return 2 * F(n-1) + 3 * F(n-2);
}