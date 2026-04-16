#include <stdio.h>

int main(){
int N;
int qnt_negativos = 0;


for(int i = 1; i<=10; i++){
    printf("Digite um valor");
    scanf("%d", &N);

if(N<0){
    qnt_negativos++;
}

}

printf("Existem %d numeros negativos", qnt_negativos);

return 0;

}