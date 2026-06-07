#include <stdio.h>

#include <stdio.h>

void pos_Cresc(int);

int main(){
    int n;
    do{
        printf("N: ");
        scanf("%d", &n);
    } while(n < 0);
    
    printf("Sequencia crescente dos pares: ");
    pos_Cresc(n);
}

void pos_Cresc(int n){
    if(n == 0){
        printf("%d", n);
        return;
    }
    pos_Cresc(n-1);
    if(n%2 == 0)
        printf("%d", n);
        printf(" ");

        
}