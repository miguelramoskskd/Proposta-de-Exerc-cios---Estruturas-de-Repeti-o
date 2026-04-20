#include <stdio.h>

int main(){
    int V1[15];
    int V2[15];
    int bateu = 0;

    for(int i = 0; i<15; i++){
        printf("V1[%d] = ", i);
        scanf("%d", &V1[i]);
    }

    for(int i = 0; i<15; i++){
        printf("V2[%d] = ", i);
        scanf("%d", &V2[i]);
    }

    for(int i = 0; i<15; i++){
        if(V1[i] == V2[i]){
            bateu++;
        }
    }

    printf("Bateu %d vezes. ", bateu);
}