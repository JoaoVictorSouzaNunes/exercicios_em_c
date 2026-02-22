#include <stdio.h>
#include <locale.h>

void displayVet(float v[], int n) {
    printf("[");
    for(int i = 0; i < n; i++) {
        if(i>0) {
            printf(", ");
        }
        printf("%.2f", v[i]);
    }
    printf("]\n");
}

int main() {
    setlocale(LC_ALL, "portuguese");
    float a[5];
    float b[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o %d° valor do vetor a: ", i+1);
        scanf("%f", &a[i]);
        if(i == 0) {
            b[i]=a[i];
        } else if(i%2 == 0) {
            b[i]=a[i]*5;
        } else {
            b[i] = a[i] + 5;
        }
    }
    printf("a=");
    displayVet(a, 5);
    printf("b=");
    displayVet(b, 5);
    return 0;
}