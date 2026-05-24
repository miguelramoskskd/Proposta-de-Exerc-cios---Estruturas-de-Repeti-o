#include <stdio.h>

int cont13(int x, int y);

int main(){
    int x1;
    int y1;

    printf("Digite valor de x. ");
    scanf("%d", &x1);
    printf("Digite valor de y. ");
    scanf("%d", &y1);

    cont13(x1, y1);
}

int cont13(int x, int y){

    if(x > y){
        printf("X precisa ser menor que Y." );
        return;
    }

    for(int i = x; i <= y; i++){
        if(i % 13 == 5){
            printf("%d ", i);
        }
    }
}