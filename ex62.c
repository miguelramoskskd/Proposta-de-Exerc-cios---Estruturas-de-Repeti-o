#include <stdio.h>

int main(){
int N;
int alunos;
int soma = 0;
float media;

printf("Quantos alunos tem na sala? ");
scanf("%d", &alunos);

for(int i = 1; i<=alunos; i++){
    printf("Quanto o aluno tirou?\n");
    scanf("%d", &N);
    soma = soma + N;
}

media = soma / alunos;

printf("A média aritmética dos valores é %.2f\n", media);

return 0;

}