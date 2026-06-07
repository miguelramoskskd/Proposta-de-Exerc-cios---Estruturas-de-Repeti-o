
void pos_Decresc(int);

int main(){
    int n;
    do{
        printf("N: ");
        scanf("%d", &n);
    } while(n < 0);
    
    printf("Sequencia crescente dos pares: ");
    pos_Decresc(n);
}

void pos_Decresc(int n){
    if(n == 0){
        printf("%d", n);
        return;
    }
    if(n%2 == 0)
        printf("%d", n);
        printf(" ");
        pos_Decresc(n-1);
}