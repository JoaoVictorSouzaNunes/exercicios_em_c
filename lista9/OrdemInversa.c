#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int vet[8];
    for(int i = 0; i < 8; i++) {
        printf("Digite o %d° número da lista: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("[");
    for(int i = 7; i >= 0; i--) {
        printf("%d", vet[i]);
        if(i > 0) {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}