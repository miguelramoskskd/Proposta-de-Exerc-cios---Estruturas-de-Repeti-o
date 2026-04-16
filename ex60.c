#include <stdio.h>

int main(){
int N;
int qntd_dentro = 0;
int qntd_fora = 0;


for(int i = 1; i<=10; i++){
    printf("Digite um valor");
    scanf("%d", &N);

if(N>=10 && N<=20){
    qntd_dentro++;
} else {
    qntd_fora++;
}

}

printf("%d dentro do intervalo e %d fora do intervalo", qntd_dentro, qntd_fora);

return 0;

}