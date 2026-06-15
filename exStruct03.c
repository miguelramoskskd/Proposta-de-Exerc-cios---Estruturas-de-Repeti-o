#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
} Aluno;

void imprimeMenu();
void insereAluno(Aluno[],int,int);
int buscaRA(Aluno[],int,int);
void imprimeTurma(Aluno[],int);

int main(){
    int op=0;
    Aluno turmaLP[3];
    int n=0, RA;

    while(op!=5){
        system("cls");
        imprimeMenu();
        scanf("%d",&op);
        switch(op){

            case 1:
                if(n==3)
                    printf("\nTurma Lotada!\n");
                else{
                    printf("\nRA: ");
                    scanf("%d",&RA);
                    getchar();
                    if(!buscaRA(turmaLP,n,RA)){ // SE O RA QUE COLOQUEI NÃO EXISTE, RETORNA 0, 0! = 1
                        insereAluno(turmaLP,n,RA);
                        n++;
                    }
                    else{
                        printf("\nRA já existe.\n");
                    }
                }
                break;

            case 2:
                if(n==0){
                    printf("\nTurma vazia!\n");
                }
                else{
                    imprimeTurma(turmaLP,n);
                }
                break;
                
            case 5:
                printf("\nTchau!");
                break;

            default:
                printf("\nOpção incorreta.");
                break;
        }
    }
}

void imprimeMenu(){
    printf("\nMenu:");
    printf("\n1 - Inserir Aluno");
    printf("\n2 - Imprime Turma");
    printf("\n3 - ...");
    printf("\n5 - Sair");
    printf("\nOpção: ");
}

void insereAluno(Aluno turmaLP[],int n,int RA){
    printf("\nNome: ");
    fgets(turmaLP[n].nome,sizeof(turmaLP[n].nome),stdin);
    turmaLP[n].nome[strlen(turmaLP[n].nome)-1] = '\0';
    turmaLP[n].RA = RA;
    printf("RA: %d\n",turmaLP[n].RA);
    for(int i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&turmaLP[n].notas[i]);
    }
    printf("Frequencia: ");
    scanf("%d",&turmaLP[n].frequencia);
}

int buscaRA(Aluno turmaLP[],int n,int RA){
    for(int i=0;i<n;i++){
        if(RA==turmaLP[i].RA)
            return 1;
    }
    return 0;
}

void imprimeTurma(Aluno turmaLP[],int n){
    for(int i=0;i<n;i++){
        printf("\nAluno %d",i+1);
        printf("\nNome: %s",turmaLP[i].nome);
        printf("\nRA: %d",turmaLP[i].RA);
        for(int j=0;j<3;j++){
            printf("\nNota %d: %.1f",j+1,turmaLP[i].notas[j]);
        }
        printf("\nPresenca: %d\n",turmaLP[i].frequencia);
    }
    getchar();
    getchar();
}
