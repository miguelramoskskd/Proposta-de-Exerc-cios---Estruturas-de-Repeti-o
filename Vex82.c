#include <stdio.h>

int main(){
    int V[10];
    int X;
    int M[10];

    for(int i = 0; i<10; i++){
        printf("V[%d]", i);
        scanf("%d", &V[i]);
    }

    printf("Variável X: ", X);
    scanf("%d", &X);

    for(int i=0; i<10; i++){
        M[i] = V[i] * X;
    }

    for(int i=0; i<10; i++){
        printf("M[%d] com valor %d\n ", i, M[i]);
    }

}