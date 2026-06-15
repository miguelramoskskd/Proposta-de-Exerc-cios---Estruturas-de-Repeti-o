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
    int RA;
    int frequencia;
    float notas[3];
} Aluno;

int main(){

    Aluno aluno1;

    printf("Nome: ");
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strlen(aluno1.nome) - 1] = '\0';
    printf("\nData de nascimento: ");
    printf("\nDia: ");
    scanf("%d", &aluno1.dataNasc.dia);
    printf("\nMes: ");
    scanf("%d", &aluno1.dataNasc.mes);
    printf("\nAno: ");
    scanf("%d", &aluno1.dataNasc.ano);
    printf("\nRA: ", &aluno1.RA);
    scanf("%d", &aluno1.RA);
    
    for(int i = 0; i<3; i++){
        printf("\nNota %d: ", i+1);
        scanf("%f", &aluno1.notas[i]);
    }

    printf("\nFrequencia: ");
    scanf("%d", &aluno1.frequencia);

    printf("\nDados do aluno: ");
    printf("\nNome: %s", aluno1.nome);
    printf("\nData nascimento: %d/%d/%d ", aluno1.dataNasc.dia, aluno1.dataNasc.mes, aluno1.dataNasc.ano);
    printf("\nRA: %d", aluno1.RA);
    for(int i = 0; i<3; i++){
        printf("\nNota[%d]: %.1f", i+1, aluno1.notas[i]);
    }

    printf("\nFrequencia: %d", aluno1.frequencia);

}