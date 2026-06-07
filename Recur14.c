#include <stdio.h>

void imprimeSerie(int, int, int);

int main(){
    int i, j, k;
    printf("I: ");
    scanf("%d", &i);
    printf("J: ");
    scanf("%d", &j);
    printf("Incrementa em quanto? ");
    scanf("%d", &k);
    imprimeSerie(i, j, k);

}

void imprimeSerie(int i, int j, int k){
    if(i > j)
        return 0;
    printf("%d", i);
    printf("\t");    
    imprimeSerie(i+k, j, k);
}