#include <stdio.h>

int main(){
int N;
int soma = 0;

for(int i = 1; i<=10; i++){
    printf("Digite um valor");
    scanf("%d", &N);
    soma = soma + N;
}

printf("A soma dos valores é %d\n", soma);

return 0;

}