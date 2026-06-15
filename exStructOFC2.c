#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int frequencia;
    int RA;
    float notas[3];
    char nome[30];
} Aluno;

void imprimeMenu();
void insereAluno(Aluno[], int n, int RA);
int buscaRA(Aluno[], int n, int RA);
int removeAluno(Aluno[], int n, int RA);
void visualizaTurma(Aluno[], int n);

int main(){
    Aluno turmaLP[3];
    int op = 0;
    int n = 0;
    int RA;

    while(op!=5){
        system("cls");
        imprimeMenu();
        scanf("%d", &op);

        switch(op){
            case 1:
                if(n==3){
                    printf("Turma lotada!");
                } else{
                    printf("\nRA: ");
                    scanf("%d", &RA);
                    if(!buscaRA(turmaLP, n, RA)){
                        insereAluno(turmaLP, n, RA);
                        n++;
                    } else{
                        printf("\nRA já existe. ");
                    }
                }
                break;

            case 2:
                if(n==0){
                    printf("\nTurma vazia.\n");
                } else{
                    visualizaTurma(turmaLP, n);
                }
                break;

            case 3:
                if(n==0){
                    printf("\nTurma vazia.\n");
                } else{
                    printf("\nRA do aluno que quer remover: ");
                    scanf("%d", &RA);
                }
                if(buscaRA(turmaLP, n, RA)){
                    n = removeAluno(turmaLP, n, RA);
                    printf("\nAluno removido.\n");
                } else{
                    printf("\nAluno nao encontrado. ");
                }
                break;

            case 5:
                printf("\nPrograma finalizado.");
                break;

            default:
                printf("\nOpcao incorreta. ");
                break;
        }

        if(op!=5){
            getchar();
            getchar();
        }
    }
}

void imprimeMenu(){
    printf("\nMenu: ");
    printf("\n1 - Inserir aluno");
    printf("\n2 - Imprimir turma");
    printf("\n3 - Remover aluno ");
    printf("\n5 - Sair. ");
}

void insereAluno(Aluno turmaLP[], int n, int RA){
    printf("\nNome:");
    fgets(turmaLP[n].nome, sizeof(turmaLP[n].nome), stdin);
    turmaLP[n].nome[strlen(turmaLP[n].nome) - 1 ] = '\0';
    
    turmaLP[n].RA = RA;
    printf("RA: %d\n", turmaLP[n].RA);
    
    for(int i = 0; i<3; i++){
        printf("Nota[%d]:", i+1);
        scanf("%d", &turmaLP[n].notas[i]);
    }

    printf("\nFrequencia: ");
    scanf("%d", &turmaLP[n].frequencia);
}

int buscaRA(Aluno turmaLP[], int n, int RA){
    for(int i = 0; i<n; i++){
        if(RA == turmaLP[n].RA){
            return 1;
        }
    }

    return 0;
}

void visalizaTurma(Aluno turmaLP[], int n){
    for(int i = 0; i<n; i++){
        printf("\nAluno %d: ", i+1);
        printf("\nNome: %s", turmaLP[i].nome);
        printf("\nRA: %d", &turmaLP[i].RA);
        
        for(int j=0; j<3; j++){
            printf("Nota[%d]: %1.f", j+1, turmaLP[i].notas[i]);
        }

        printf("\nFrequencia: %d", &turmaLP[i].frequencia);
}

}

int removeAluno(Aluno turmaLP[], int n, int RA){
    int pos = -1;

    for(int i = 0; i<n; i++){
        if(turmaLP[n].RA == RA){
            pos = i;
            break;
        }
    }

    if(pos!= -1){
        for(int i = pos; i<n-1; i++){
            turmaLP[i] = turmaLP[i+1];
        }

        n--;
    }

    return n;
}