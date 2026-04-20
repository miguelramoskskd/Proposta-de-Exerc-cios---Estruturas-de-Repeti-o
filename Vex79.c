#include <stdio.h>

int main(){
int A[20];
int soma = 0;
int media;
int acimadamedia = 0;

// CAPTANDO NOTAS
for(int i=0; i<20; i++){
    do{ 
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);

        if(A[i] < 0 || A[i] > 10){
            printf("Nota inválida! Digite entre 0 e 10.\n ");
        }
    } while(A[i] < 0 || A[i] > 10); 

// SOMA DAS NOTAS
    soma = soma + A[i];

}

// MEDIA DAS NOTAS
media = soma / 20;

// ACIMAS DA MEDIA
for(int i = 0; i<20; i++){
    if(A[i] > media){
        acimadamedia++;
    }
}

// MOSTRAR ALUNOS E RESPECTIVAS NOTAS
for(int i=0; i<20; i++){
    printf("Aluno A[%d] com nota %d\n ", i, A[i]);
}

// MOSTRAR MEDIA E ACIMAS DA MÉDIA
printf("A media da sala é %d ", (media));
printf("Existem %d alunos acima da media ", (acimadamedia));

return 0;

}

