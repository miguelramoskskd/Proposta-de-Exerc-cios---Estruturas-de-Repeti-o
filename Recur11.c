#include <stdio.h>
#define N 5

void array(int [N], int pos);

int main(){
    int V[N];
    int pos = 0;
    printf("Vetor: \n");
    for(int i = 0; i<N; i++){
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }
    array(V, pos);
}

void array(int V[], int pos){
    if(pos == N)
        return;
    printf("%d ", V[pos]);
    array(V, pos+1);
}

