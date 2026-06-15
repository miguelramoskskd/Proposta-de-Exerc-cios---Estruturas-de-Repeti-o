#include <stdio.h>

int inverte(int, int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("%d\n", inverte(n, 0));
}

int inverte(int n, int resultado){
    if(n == 0)
        return resultado;

    // pega o ultimo digito (n%10) e remove o ultimo digito (n/10)
    // ex: 123 % 10 = 3 
    // ex: 123 / 10 = 12
    // resultado * 10 abre um espaço pra colocar o digito
    
    return inverte(n / 10, resultado * 10 + n % 10);
}
