#include <stdio.h>

int main(){
    int V[20];

    for(int i = 0; i<20; i++){
        printf("V[%d]", i);
        scanf("%d", &V[i]);
    }

    for(int i = 19; i>=0; i--){
        printf("V[%d] com valor %d\n", i, V[i]);
    }


}