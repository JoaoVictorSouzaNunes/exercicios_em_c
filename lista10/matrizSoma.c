#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void intOcuppy(int line, int column, int matriz[line][column], int bool) {
    for(int i = 0; i < line; line++) {
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
    float m1[2][3];
    float m2[2][3];
    float somam[2][3];
    floatOcuppy(2, 3, m1, 0);
    floatOcuppy(2, 3, m2, 0);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%.2f ", m1[i][j]);
        }
        if(i==0) {
            printf("   +\t");
        } else {
            printf("\t\t");
        }
        for(int j = 0; j < 3; j++) {
            printf("%.2f ", m2[i][j]);
        }
        if(i==0) {
            printf("   =\t");
        } else {
            printf("\t\t");
        }
        for(int j = 0; j < 3; j++) {
            somam[i][j]=m1[i][j]+m2[i][j];
            printf("%.2f ", somam[i][j]);
        }
        printf("\n");
    }
   return 0;
}