
#include <stdio.h>
#include <locale.h>

int m=2; //global

void Teste();
int teste();

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("m=%d\n", m);
    //printf("n=%d\n", n);
    int n2 = teste();
    printf("n=%d", n2);

    return 0;
}

void Teste() {
    int n=1; //local
}

int teste() {
    int n1=1;
    return n1;
}
