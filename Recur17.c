#include <stdio.h>

float fatorial_quadruplo(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);

    printf("%.2f ", fatorial_quadruplo(n));
}

float fatorial_quadruplo(int n){
  if(n == 1)
    return 2;
return 2 * (2 * n-1) * fatorial_quadruplo(n-1);
}
  