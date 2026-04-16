#include <stdio.h>

int main(){
int V_mercadoria;
int N_mercadorias = 0;
int valor_total = 0;
char op = ' ';
float media;

do{ 
    printf("O valor da mercadoria: ");
    scanf("%d", &V_mercadoria);

    valor_total = valor_total + V_mercadoria;
    N_mercadorias++;

    printf("Tem mais mercadorias? (S/N) ");
    scanf(" %c", &op);

} while ((op == 's') || (op == 'S'));

media = (valor_total / N_mercadorias);

printf("O valor total em estoque é %d\n A média de valor das mercadorias é %.2f\n", valor_total, media);

return 0;

}