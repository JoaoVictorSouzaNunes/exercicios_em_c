#include <stdio.h>

int main() {
    int values[10], maior;
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor para adicionar no vetor: ");
        scanf("%d", &values[i]);
        if(i == 0 || values[i] > maior) {
            maior=values[i];
        }
    }
    printf("O maior valor do vetor e: %d", maior);
    return 0;
}