#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    if(num>0) {
        printf("POSITIVO");
    } else if(num<0) {
        printf("NEGATIVO");
    } else {
        printf("NEUTRO");
    }
    return 0;
}