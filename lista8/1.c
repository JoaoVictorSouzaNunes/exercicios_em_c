#include <stdio.h>
#include <math.h>
#define PI 3.14

void iszero(int a) {
    if(a==0) {
        printf("e zero");
    }
    else {
        printf("%d e diferente de zero.", a);
    }
}

void issigned(int a) {
    if(a > 0) {
        printf("e positivo");
    } else if(a < 0) {
        printf("e negativo");
    } else {
        printf("e nulo");
    }
}

void parity(int a) {
    if(a%2 == 0) {
        printf("e par");
    } else {
        printf("e impar");
    }
}

void legal_age(unsigned int i) {
    printf("sua idade e %u\n", i);
    if(i >= 18) {
        printf("maior de idade");
    } else {
        printf("menor de idade");
    }
}

void multiply_five(int n) {
    if(n%5 == 0) {
        printf("%d e divisivel por 5", n);
    }
    else {
        printf("%d nao e divisivel por 5", n);
    }
}

float circle_area(float r) {
    float area = PI*pow(r, 2);
    return area;
}
float volume(float compri, float larg, float altur) {
    float volume = compri*larg*altur;
    return volume;
}

float execute(char* a, int logical) {
    float n;
    do {
        printf(a);
        scanf("%f", &n);
    } while(logical);
    return n;
}

int factorial(unsigned int n) {
    int fac=1;
    for(int i = n; n > 0; n--) {
        fac*=i;
    }
    return fac;
}

int main() {
    /*float a=execute("Raio do circulo: ", a<0);
    float A=circle_area(a);
    printf("A area do circulo e %.2f\n", A);*/
    /*float b1, b2, b3, b;
    printf("Informe comprimento, largura e altura: ");
    scanf("%f %f %f", &b1, &b2, &b3);
    b=volume(b1, b2, b3);
    printf("O volume vale %.2f", b);*/
}