#include <stdio.h>

int strcmp(char str1[], char str2[]);

int main(){
    char str1[100];
    char str2[100];

    printf("Digite a primeira palavra: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Digite a segunda palavra: ");
    fgets(str2, sizeof(str2), stdin);

    if(strcmp(str1, str2)){
        printf("As strings sao iguais. ");
    } else{
        printf("As strings sao diferentes. ");
    }
}

int strcmp(char str1[], char str2[]){
    int i = 0;

    while(str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return 0;
        }
        i++;
    }

    return 1;
}