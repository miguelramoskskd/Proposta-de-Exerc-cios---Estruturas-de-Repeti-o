#include <stdio.h> 

int main(){
float n1, n2, resultado;

printf("Escreva um valor. ");
scanf("%f",&n1);
printf("Escreva outro valor. ");
scanf("%f",&n2);

while(n2 == 0){
    printf("O valor não pode ser ZERO.\n Escreva outro valor.\n ");
    scanf("%f",&n2);
}

resultado = n1 / n2;
printf("O resultado da divisão é: %.2f", resultado);

return 0;

}   
