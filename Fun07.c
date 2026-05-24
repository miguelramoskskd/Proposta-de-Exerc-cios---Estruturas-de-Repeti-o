#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[]);

int main(){
    char palavra[30];

    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strlen(palavra) - 1] = '\0';

    if(ehPalindromo(palavra)){
        printf("É palindromo. ");
    } else {
        printf("Nao é palindromo. ");
    }
}

int ehPalindromo(char palavra[]){
    for(int i = 0; i<strlen(palavra)/2; i++){
        if(palavra[i] != palavra[strlen(palavra) - 1 - i]){
            return 0;
        }
    }
    return 1;
}