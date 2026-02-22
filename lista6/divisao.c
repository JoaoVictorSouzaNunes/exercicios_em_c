#include <stdio.h>

int main() {
    int a, b;


    printf("Digite o numerador e o denominador, respectivamente: ");
    scanf("%d %d", &a, &b);

    if(b == 0) {
        printf("A divisao e indefinida");
    } else{
        if(a%b == 0) {
            printf("E divisivel!");
        } else {
            printf("Nao e divisivel!");
        }
    }
    return 0;
}