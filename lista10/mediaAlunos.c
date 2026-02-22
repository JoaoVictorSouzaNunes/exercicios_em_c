#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float notas[5][3];
    float medias[5]={0};
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite a nota %d do %d° aluno: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
            medias[i]+=notas[i][j];
        }
        medias[i]/=j;
    }
    printf("[ ");
    for(i = 0; i < 5; i++) {
        printf("Aluno %d: %.2f, ", i+1, medias[i]);
    }
    printf(" ]");
    return 0;
}