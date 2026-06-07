#include <stdio.h>
#define N 5

int menorVetor(int [N], int pos);

int main(){
    int V[N];
    int pos = 0;
    printf("Vetor: \n");
    for(int i = 0; i<N; i++){
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    printf("Menor elemento: %d", menorVetor(V, 0));
}

int menorVetor(int V[], int pos){
    if(pos == N-1)
        return V[pos];
        
    int menordoResto = menorVetor(V, pos+1);

    if(V[pos] < menordoResto)
        return V[pos];
    return menordoResto;
}
