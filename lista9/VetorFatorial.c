#include <stdio.h>
#include <locale.h>

int factorial(int n) {
    int fat=1;
    for(int i = n; i > 0; i--) {
        fat*=i;
    }
    return fat;
}

void displayVet(unsigned v[], int n) {
    printf("[");
    for(int i = 0; i < n; i++) {
        if(i>0) {
            printf(", ");
        }
        printf("%u", v[i]);
    }
    printf("]\n");
}

int main() {
    setlocale(LC_ALL, "portuguese");
    unsigned int v1[5];
    unsigned int v2[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o %d° número do vetor v1: ", i+1);
        scanf("%u", &v1[i]);
        v2[i]=factorial(v1[i]);
    }
    printf("v1=");
    displayVet(v1, 5);
    printf("v2=");
    displayVet(v2, 5);
    return 0;
}