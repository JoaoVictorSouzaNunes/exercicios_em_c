#include <stdio.h>
#include <locale.h>

int soma(int a, int b) {
    return a+b;
}
int subtracao(int a, int b) {
    return a-b;
}

int multiplicacao(int a, int b) {
    return a*b;
}

float divisao(int a, int b) {
    return a/b;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, sum, diff, multi;
    float div;
    printf("Digite 2 números inteiros:\n");
    scanf("%d %d", &n1, &n2);
    sum=soma(n1, n2);
    diff=subtracao(n1, n2);
    multi=multiplicacao(n1, n2);
    div=divisao(n1, n2);
    printf("Soma: %d\n Subtração: %d\n Multiplicação: %d\n Divisão: %.2f", sum, diff, multi, div);
    return 0;

}