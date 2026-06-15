#include <stdio.h>
#define N 100

void inverter(float v[], int inicio, int fim);

int main() {
    float v[N];

    for(int i = 0; i < N; i++)
        scanf("%f", &v[i]);

    inverter(v, 0, N-1);

    for(int i = 0; i < N; i++)
        printf("%.2f ", v[i]);

}

void inverter(float v[], int inicio, int fim) {
    if(inicio >= fim)
        return;

    float aux = v[inicio];
    v[inicio] = v[fim];
    v[fim] = aux;

    inverter(v, inicio + 1, fim - 1);
}

