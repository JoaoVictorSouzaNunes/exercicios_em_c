#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void intOcuppy(int line, int column, int matriz[line][column], int bool) {
    for(int i = 0; i < line; i++) {
        for(int j = 0; j < column; j++) {
            if(!bool) {
                int random = rand()%100;
                matriz[i][j]=random;
            } else {
                printf("Digite o elemento a%d%d=", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int n, m, i, j;

    printf("N° de linhas: ");
    scanf("%d", &n);
    printf("N° de colunas: ");
    scanf("%d", &m);

    int A[n][m], B[n][m];

    intOcuppy(n, m, A, 0);

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            B[i][j]=A[i][j]*3;
            printf("[ %d ]", A[i][j]);
        }
        printf("\t");
        for(j = 0; j < m; j++) {
            printf("[ %d ]", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}