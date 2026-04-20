#include <stdio.h>

int main(){
    float temp[365];
    float soma = 0;
    float media;
    float menor;
    float maior;
    int abaixoMedia = 0;


    for(int i = 0; i < 365; i++){
        printf("Temperatura do dia: %d ", i + 1);
        scanf("%f", &temp[i]);
        soma = soma + temp[i];

        // definir menor temperatura e maior temperatura, assumindo que a primeira colocada é ambas
        if(i==0){   
            menor = temp[i];
            maior = temp[i];
        } else {
            if(temp[i] < menor){
            menor = temp[i];
            }
            if(temp[i] > maior){
            maior = temp[i];
            }
        }
    }

    media = soma / 365;

    // contando os abaixo da media
    for(int i = 0; i < 365; i++){
        if(temp[i] < media){
            abaixoMedia++;
        }
    }

    // resultados

    printf("\nMenor temperatura: %2.f\n", menor);
    printf("\nMaior temperatura: %2.f\n", maior);
    printf("\nMedia anual das temperaturas: %2.f\n", media);
    printf("\nDias abaixo da media: %d\n", abaixoMedia);

    return 0;
}
