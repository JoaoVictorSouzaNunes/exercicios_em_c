#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void floatOcuppy(int line, int column, float matriz[line][column], int bool) {
    for(int i = 0; i < line; i++) {
        for(int j = 0; j < column; j++) {
            if(bool==0) {
                float random =(float)(1 + rand() % 1001)/100;
                matriz[i][j]=random;
            } else {
                printf("Digite o elemento a%d%d=", i+1, j+1);
                scanf("%f", &matriz[i][j]);
            }
        }
    }
}

int main() {
    srand(time(NULL));
    float A[4][2], B[4][2];
    floatOcuppy(4, 2, A, 0);
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            B[3-i][1-j]=A[i][j];
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            printf("[ %f ]", A[i][j]);
        }
        printf("\t");
        for(j = 0; j < 2; j++) {
            printf("[ %f ]", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}