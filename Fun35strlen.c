#include <stdio.h>


int strlen(char str[]);

int main(){
    char palavra[100];
    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    int tamanho;
    
    printf("O tamanho do string é %d", tamanho = strlen(palavra));


}

int strlen(char str[]){
    int i = 0;
    
    while(str[i] != '\0'){
        i++;
    }

    return i;

}