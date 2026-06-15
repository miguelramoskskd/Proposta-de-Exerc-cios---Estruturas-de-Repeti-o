#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int frequencia;
    int RA;
    char nome[30];
    float notas[3];
} Aluno;

void imprimeMenu();
void insereAluno(Aluno[], int, int);
int buscaRA(Aluno[], int, int);
void visualizaTurma(Aluno[], int);
int removeAluno(Aluno[], int, int);

int main(){
    Aluno turmaLP[3];
    int op = 0;
    int n = 0, RA;

    while(op!=5){
        system("cls");
        imprimeMenu();
        scanf("%d", &op);

    switch(op){
        case 1:
            if(n==3){
                printf("\nTurma lotada!\n");
            } else{
                printf("\nRA: ");
                scanf("%d", &RA);
                getchar();

                if(!buscaRA(turmaLP, n, RA)){
                    insereAluno(turmaLP, n, RA);
                    n++;
                }
                else{
                    printf("\nRA ja existe.\n ");
                }
            }
            break;

        case 2:
            if(n==0){
                printf("\nTurma vazia!\n");
            } else{
                visualizaTurma(turmaLP, n);
            }
            break;

        case 3:
            if(n==0){
                printf("\nTurma vazia!\n");
            } else{
                printf("\nRa do aluno a remover: ");
                scanf("%d", &RA);
                }       
                if(buscaRA(turmaLP, n, RA)){
                    n = removeAluno(turmaLP, n, RA);
                    printf("\nAluno removido.\n");
                } else{
                    printf("\nAluno não encontrado.\n");
                }
            break;

        case 5:
                printf("\nPrograma finalizado.\n");
                break;

        default:
                printf("\nOpção incorreta.\n");
                break;
            }

        if(op!=5){
            getchar();
            getchar();
        }
    }
}
              
void imprimeMenu(){
    printf("\n Menu: ");
    printf("\n 1 - Inserir Aluno ");
    printf("\n 2 - Imprime Turma ");
    printf("\n 3 - Remove Aluno ");
    printf("\n 5 - ");

}

void insereAluno(Aluno turmaLP[], int n, int RA){
    printf("\nNome: ");
    fgets(turmaLP[n].nome, sizeof(turmaLP[n].nome), stdin);
    turmaLP[n].nome[strlen(turmaLP[n].nome) - 1] = '\0';

    turmaLP[n].RA = RA;

    printf("RA: %d\n", turmaLP[n].RA);

    for(int i = 0; i<3; i++){
        printf("Nota[%d]: ", i+1);
        scanf("%f", &turmaLP[n].notas[i]);
    }

    printf("Frequencia: ");
    scanf("%d", &turmaLP[n].frequencia);
}

int buscaRA(Aluno turmaLP[], int n, int RA){
    for(int i = 0; i<n; i++){
        if(RA==turmaLP[i].RA)
            return 1;
    }

    return 0;
}

void visualizaTurma(Aluno turmaLP[], int n){
    for(int i = 0; i<n; i++){
        printf("\nAluno %d: ", i+1);
        printf("\nNome: %s", turmaLP[i].nome);
        printf("\nRA: %d", turmaLP[i].RA);

        for(int j = 0; j<3; j++){
            printf("\nNota[%d]: %.1f", j+1, turmaLP[i].notas[i]);
        }

        printf("\nFrequencia: %d", turmaLP[i].frequencia);
    }
}

int removeAluno(Aluno turmaLP[], int n, int RA){
    int pos = -1; // nao encontrei o aluno ainda

    for(int i = 0; i<n; i++){
        if(turmaLP[i].RA == RA){
            pos = i;
            break;   // Ao encontrar aluno, desloco alunos para trás
        }
    }

    if(pos != -1){
        for(int i = pos; i<n-1; i++){
            turmaLP[i] = turmaLP[i+1];
        }

        n--;
    }

    return n;
} 