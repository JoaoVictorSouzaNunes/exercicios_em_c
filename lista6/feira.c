#include <stdio.h>

int main() {
    unsigned int q; //inteiro sem sinal
    float r;
    printf("Digite quantas macas voce quer comprar: ");
    scanf("%d", &q);
    if(q<12) {
        r = 1.3*q;
    } else {
        r = 1.1*q;
    }
    printf("para comprar %d macas voce deve pagar %.2f", q, r);
    return 0;
}