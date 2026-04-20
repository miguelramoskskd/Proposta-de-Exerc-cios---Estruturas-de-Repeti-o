#include <stdio.h>

int main(){
    int N;

    printf("Qual o valor N? ");
    scanf("%d", &N);

    int A[N];
    int B[N];
    int SOMA[N];

    printf("Vetor A:\n ");
    for(int i = 0; i<N; i++){
        printf("A[%d]", i);
        scanf("%d", &A[i]);
    }

    printf("Vetor B:\n ");
    for(int i = 0; i<N; i++){
        printf("B[%d]", i);
        scanf("%d", &B[i]);
    }

    // soma dos vetores
    for(int i = 0; i<N; i++){
        SOMA[i] = A[i] + B[i];
    }

    // vetor de soma visual
    printf("Vetor de Soma:\n");
    for(int i = 0; i<N; i++){
        printf("SOMA[%d] = %d\n ", i, SOMA[i]);
    }

}
