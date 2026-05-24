#include <stdio.h>

int conversao(int n);

int main(){
    int celsius;
    for(int i = 50; i<=150; i++){
        printf("%d F = %d Celsius\n", i, conversao(i));
    }

}

int conversao(int n){
    int celsius;
    celsius = 5*(n-32)/9;
    return celsius;
}