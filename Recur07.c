#include <stdio.h>

// se N = 0 -> 0
// se N = 3 -> 0 1 2 3  
void cresc(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("Sequencia crescente:");
    cresc(n);
}

void cresc(int n){
    if(n == 0){
        printf("%d", n);
        return;
    }
    cresc(n-1);
    printf("%d", n); 
}
