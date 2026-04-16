#include <stdio.h>

int main(){
int N;

do{
printf("Valor N: ");
scanf("%d", &N);
if(N<0){
    printf("Valor de N inválido. Digite um valor maior que 0. ");
    scanf("%d", &N);
}
for(int i = 1; i<=N; i++) {
    printf("%d\n", i);
}

} while(N>0);

return 0;

}