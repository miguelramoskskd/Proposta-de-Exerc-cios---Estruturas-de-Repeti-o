#include <stdio.h>

int main(){
int N_mercadorias, V_mercadoria;
int valor_total = 0;
float media;

printf("Número total de mercadorias no estoque: ");
scanf("%d", &N_mercadorias);

for(int i = 0; i < N_mercadorias; i++){
    printf("O valor de cada mercadoria: ");
    scanf("%d", &V_mercadoria);
    valor_total = valor_total + V_mercadoria;
}

media = (valor_total / N_mercadorias);
printf("O valor total em estoque é %d\n A média de valor das mercadorias é %.2f\n", valor_total, media);

return 0;

}