#include <stdio.h>

int main() {
    float n1, n2, n3, af;
    printf("Digite suas notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    float mp = (n1+n2+n3)/3;
    if(mp >= 7) {
        printf("Sua nota foi %.2f, voce passou!", mp);
    } else if((mp >= 3.5) && (mp < 7)) {
        printf("Informe sua avaliação final: ");
        scanf("%f", &af);
        float mf = (6*mp + 4*af)/10;
        mp = mf;
        if(mf >= 5) {
            printf("Sua nota final foi %.2f, voce passou", mf);
        } else {
            printf("Infelizmente voce reprovou...");
        }
    } else {
        printf("Infelizmente voce reprovou");
    }
    printf("\nNota final: %.2f", mp);
    return 0;
}