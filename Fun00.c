#include <stdio.h>
#include <string.h>

int ehLetra(char);
int ehVogal(char);
int ehConsoante(char);

int main(){
    char texto[30];
    int contLetra = 0; 
    int contVogal = 0;
    int contConsoante = 0;

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto) - 1] = '\0';

    for(int i = 0; i<strlen(texto); i++){
        contLetra = contLetra + ehLetra(texto[i]);
        contVogal = contVogal + ehVogal(texto[i]);
        contConsoante = contConsoante + ehConsoante(texto[i]);
    }
    printf("\n%d letras", contLetra);
    printf("\n%d vogais", contVogal);
    printf("\n%d consoantes", contConsoante);
}

int ehLetra(char letra){
    if((letra>= 'A' && letra <= 'Z') || (letra>= 'a' && letra <= 'z'))
        return 1;
    return 0;
}

int ehVogal(char letra){
    if(ehLetra(letra)){
        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
            return 1;
        return 0;
    }
    return 0;
}

int ehConsoante(char letra){
    if(ehLetra(letra)){
        if(!ehVogal(letra))
            return 1;
        return 0;
    }
    return 0;
}