#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // necessário p/ as funções rand() e srand()
#include <time.h> //necessario p/ funções time()


int soma(int a, int b) {
    return a+b;
}
void sum(int a, int b) {
    int s=a+b;
    printf("%d", s);
}


int Dado() {

    int random=1+rand()%6;
    return random;
}

int boolean(int n) {
    if(n>0) {
        return 1;
    } else if(n==0) {
        return 0;
    } else {
        return -1;
    }
}

int soma_intervalo(int a, int b) {
    int s=0;
    for(int i = a; i <= b; i++) {
        s+=i;
    }
    return s;
}
int soma_nums(int a, int b, int c) {
    if(a>1) {
        int s=0;
        for(int i = b; i <= c; i++) {
            if(i%a==0) {
                s+=i;
            }
        }
        return s;
    } else {
        return 0;
    }
}
float Media(float p1, float p2, float p3, char c) {
    float media;
    switch(c) {
        case 'A': media=(p1+p2+p3)/3;
            break;
        case 'P': media=(p1+2*p2+3*p3)/6;
            break;
        default: printf("Operação invalida!");
                 media=0;
    }
    return media;
}




int main() {
    setlocale(LC_ALL, "Portuguese");

    /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da funções time(NULL). Este por sua vez, é calculado
    como sendo o total de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand(time(NULL));

    int n1, n2, s;

    printf("Digite 2 números:\n");
    scanf("%d %d", &n1, &n2);

    s=soma(n1, n2);
    printf("A soma vale %d\n", s);
    printf("A soma vale: ");
    sum(n1, n2);

    int a, b, c;

    printf("Digite 3 número: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("O maior dos valores é: %d", Maior(a, b, c));
    return 0;

}