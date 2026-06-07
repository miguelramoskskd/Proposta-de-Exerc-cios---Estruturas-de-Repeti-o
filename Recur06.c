#include <stdio.h>

int Multip_Rec(int, int);

int main(){
    int n1, n2;
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("Resultado: %d", Multip_Rec(n1, n2));
}

int Multip_Rec(int n1, int n2){
    if(n1 == 0 || n2 == 0)
        return 0;
    
    return n1 + Multip_Rec(n1, n2 - 1);
}