#include <stdio.h>
#define N 5

int somaVetor(int V[], int pos);

int main() {
    int V[N];

    printf("Vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }
 
    printf("Soma = %d\n", somaVetor(V, 0));

    return 0;
}

int somaVetor(int V[], int pos) {
    if (pos == N)
        return 0;
    return V[pos] + somaVetor(V, pos + 1);
}