#include <stdio.h>

int main(){
int soma = 0;
int contador = 0;
float media;

for(int i = 15; i<=100; i++){
    soma = soma + i;
    contador++;
}

media = soma / contador;

printf("A media é %.2f\n", media);

return 0;

}