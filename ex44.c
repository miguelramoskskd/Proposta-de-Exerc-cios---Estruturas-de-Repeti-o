#include <stdio.h> 

int main(){
float n1, n2, resultado;

printf("Escreva um valor. ");
scanf("%f",&n1);

do{
printf("Escreva outro valor. ");
scanf("%f",&n2);

if(n2 == 0){
    printf("O valor não pode ser ZERO.\n Escreva outro valor.\n ");
}

} while(n2 == 0);

resultado = n1 / n2;
printf("O resultado da divisão é: %.2f", resultado);

return 0;

}   