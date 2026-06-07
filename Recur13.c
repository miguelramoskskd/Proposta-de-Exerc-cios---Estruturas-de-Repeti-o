#include <stdio.h>

int somaSerie(int, int, int);

int main(){
    int i, j, k;
    printf("I: ");
    scanf("%d", &i);
    printf("J: ");
    scanf("%d", &j);
    printf("Incrementa em quanto? ");
    scanf("%d", &k);

    printf("%d", somaSerie(i, j, k));
}

int somaSerie(int i, int j, int k){
    if(i > j)
        return 0;
    return i + somaSerie(i+k, j, k);
}