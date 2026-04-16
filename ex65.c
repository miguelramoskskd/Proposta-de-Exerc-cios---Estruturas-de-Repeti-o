#include <stdio.h>

int main(){
int N1, N2;
int soma = 0;

printf("Digite um valor");
scanf("%d", &N1);

printf("Digite um valor");
scanf("%d", &N2);

for(int i = N1; i <= N2; i++){
    soma = soma + i;
}

printf("A soma é %d\n", soma);

return 0;

}