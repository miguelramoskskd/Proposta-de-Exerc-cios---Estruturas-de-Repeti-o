#include <stdio.h>

int main(){
int N;
int soma = 0;
float media;

for(int i = 1; i<=10; i++){
    printf("Digite um valor");
    scanf("%d", &N);
    soma = soma + N;
}

media = soma / 10;

printf("A média aritmética dos valores é %.2f\n", media);

return 0;

}