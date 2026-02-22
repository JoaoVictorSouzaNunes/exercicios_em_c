#include <stdio.h>
#include <locale.h>
#include <math.h>

float delta(float a, float b, float c) {
    float delta = pow(b, 2)-4*a*c;
    return delta;
}
void raizes(float a, float b, float c, float r[]) {
    float d = delta(a, b, c);
    if(d<0) {
        printf("As raizes não são reais!\n");
    }
    r[0]=(-b+pow(d, 0.5))/(2*a);
    r[1]=(-b-pow(d, 0.5))/(2*a);

}

int main() {
    setlocale(LC_ALL, "portuguese");

    float a, b, c, raiz[2];
    printf("ax²+bx+c=0\n Digite os valores de a, b e c, respectivamente:\n");
    scanf("%f %f %f", &a, &b, &c);
    raizes(a, b, c, raiz);
    printf("As raizes da equação são: %.2f e %.2f", raiz[0], raiz[1]);
    return 0;
}