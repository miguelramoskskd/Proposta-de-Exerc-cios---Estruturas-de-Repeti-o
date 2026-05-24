#include <stdio.h>


void strcnp(char destino[], char origem[], int n);

int main(){
    char origem[100];
    char destino[100];

    int n;

    printf("Digite a string de origem: ");
    fgets(origem, sizeof(origem), stdin);

    printf("Digite a string de destino: ");
    fgets(destino, sizeof(destino), stdin);

    printf("Digite quantos caracteres quer copiar: ");
    scanf("%d", &n);

    strcnp(destino, origem, n);
    printf("String copiada: %s", destino);

}

void strcnp(char destino[], char origem[], int n){
    int i;

    for(i = 0; i<n && origem[i] != '\0'; i++){
        destino[i] = origem[i];
    }

    destino[i] = '\0';
}