#include <stdio.h>

int main() {
    char gab[30];
    int i=0, n, num;
    while(i<30) {
        scanf("%d", &n);
        if((n='A')||(n='B')||(n='C')||(n='D')||(n='E')) {
            gab[i]=n;
            i++;
        } else continue;
    }
    printf("Numero de alunos: ");
    scanf("%d", &num);
    int alunos[num], gabAluno[30], pontos;
    for(int c = 0; c < num; c++) {
        pontos=0;
        printf("---------------------- ALUNO %d ------------------------\n", c+1);
        i=0;
        while(i<30) {
            scanf("%d", &gabAluno[i]);
            if(gabAluno[i]==gab[i]) {
                pontos++;
            }
        }
        alunos[c]=pontos;
    }
    for(int c = 0; c < num; c++) {
        printf("ACERTOS-ALUNO%d = %d\n", c+1, alunos[c]);
    }
    return 0;
}