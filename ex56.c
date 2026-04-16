#include <stdio.h>

int main() {

    int resultado;
    int N;

    do{
        printf("Tabuada de que?\n");
        scanf("%d", &N);

        if(N < 1 || N > 10) {
            printf("Valor inválido! Digite um valor válido.\n");
        }

    } while (N < 1 || N > 10);

    printf("Tabuada do %d\n", N);
    
    for (int i = 1; i <= 10; i++) {
        resultado = (N * i);
        printf("%d x %2d = %d\n", N, i, resultado);
    }

    return 0;
    
}