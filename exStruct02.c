#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char nome[30];
    Data dataNasc;
    int frequencia;
    int RA;
    float notas[3];
} Aluno;

int main(){
    Aluno turmaLP[3];

    for(int i=0; i<3; i++){
        printf("\nAluno %d", i+1);
        printf("\nNome: ");
        getchar();
        fgets(turmaLP[i].nome,sizeof(turmaLP[i].nome),stdin);
        turmaLP[i].nome[strlen(turmaLP[i].nome) - 1] = '\0';
        printf("\nRA: ");
        scanf("%d", &turmaLP[i].RA);
        for(int j = 0; j<3; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &turmaLP[i].notas[j]);
        }

        printf("Frequencia: ");
        scanf("%d", &turmaLP[i].frequencia);
  }


        printf("\nDados do aluno: \n");
        for(int i = 0; i<3; i++){
            printf("\nAluno %d: ", i+1);
            printf("\nNome: %s", turmaLP[i].nome);
            printf("\nRA: %d", turmaLP[i].RA);
            for(int j = 0; j<3; j++){
                printf("\nNota %d: %.1f ", j+1, turmaLP[i].notas[j]);
            }
            printf("\nFrequencia: %d", turmaLP[i].frequencia);

        }

  
}