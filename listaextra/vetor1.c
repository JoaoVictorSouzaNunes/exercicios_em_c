#include <stdio.h>

int main() {
    int n, vet[100], c=0, num, id=-1;
    do{
        printf("vet[%d]=", c);
        scanf("%d", &n);
        if(n==0) continue;
        vet[c]=n;
        c++;
    } while(n!=0);
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int i = 0; i < c; i++) {
        if(num==vet[i]) {
            id=i;
        }
    }
    if(id==-1) {
        printf("O numero nao esta no vetor");
    } else {
        printf("O numero %d esta na posicao %d do vetor", num, id);
    }
    return 0;
}