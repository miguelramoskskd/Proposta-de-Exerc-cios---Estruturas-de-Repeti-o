#include <stdio.h>

// se N = 0 -> 0
// se N = 3 -> 0 1 2 3  
void decresc(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("Sequencia decrescente:");
    decresc(n);
}

void decresc(int n){
    if(n == 0){
        printf(" ");
        printf("%d", n);
        return;
    }
    printf(" ");
    printf("%d", n);
    printf(" ");
    decresc(n-1);
}
