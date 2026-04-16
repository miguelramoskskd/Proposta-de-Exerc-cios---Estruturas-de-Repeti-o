
#include <stdio.h>

int main() {

    int resultado;

    printf("Tabuda do 8\n");

    for (int i = 1; i <= 10; i++) {
        resultado = (8 * i);
        printf("8 x %2d = %d\n", i, resultado);
    }

    return 0;
    
}