#include <stdio.h> 

int main(){
float p1, p2, media;
char op;

do{

do{
    printf("Digite a primeira nota: ");
    scanf("%f", &p1);
    
    if(p1 < 0 || p1 > 10){
        printf("Nota inválida, digite novamente.\n");
    }
} while (p1 < 0 || p1 > 10);

do{
    printf("Digite a segunda nota:");
    scanf("%f", &p2);

    if(p2 < 0 || p2 > 10){
        printf("Nota inválida, digite novamente.\n");
    }
} while (p2 < 0 || p2 > 10);

media = (p1 + p2) / 2;
printf("Média do aluno: %.2f", media);

do {
    printf("\nNovo cálculo? (s/n)");
    scanf(" %c", &op);

    if(op != 's' && op != 'n' && op!= 'S' && op != 'N'){
        printf("Valor inválido, digite novamente.\n");
    }
    
}  while(op != 's' && op != 'n' && op!= 'S' && op != 'N'); 

} while(op == 's' || op == 'S');

return 1;

}   