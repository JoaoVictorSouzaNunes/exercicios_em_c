#include <stdio.h>
#include <locale.h>

int maior(int a, int b) {
    int maior = (a>b) ?a:b;
    return maior;
}

int Maior(int a, int b, int c) {
    if(a>=maior(b, c)) {
        return a;
    } else if(b>=maior(a, c)) {
        return b;
    } else {
        return c;
    }
}

void Menor(int a, int b, int c) {
    int menor;
    if((a<b) || (a<c)) {
        menor=a;
    } else if((b<a) || (b<c)) {
        menor=b;
    } else {
        menor = c;
    }
    printf("%d", menor);
}

int Min(int a, int b, int c) {
    int menor;
    if((a<b) || (a<c)) {
        menor=a;
    } else if((b<a) || (b<c)) {
        menor=b;
    } else {
        menor = c;
    }
    return menor;
}

void Max_Min(int n1, int n2, int n3, int n4, int n5) {
    int min, max;

    min=Min(n1, n2, n3);
    min=Min(min, n4, n5);
    max=Maior(n1, n2, n3);
    max=Maior(max, n4, n5);
    printf("O maior valor é %d e o menor é %d", max, min);

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    printf("Digite 3 números: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("O maior número digitado foi %d", Maior(a, b, c));
    printf("O menor número digitado foi ");
    Menor(a, b, c);
    return 0;
}