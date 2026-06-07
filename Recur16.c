#include <stdio.h>

int fatorial_duplo(int);

int main(){
    int n;
    do{
        printf("N: ");
        scanf("%d", &n);
    } while(n%2 == 0);

    printf("%d!! : %d ", n, fatorial_duplo(n));
}

int fatorial_duplo(int n){
  if(n == 1)
    return 1;
return n*fatorial_duplo(n-2);

}
  