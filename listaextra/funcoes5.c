#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float degreeToRadians(float g) {
    float r = g*(M_PI/180);
    return r;
}

int main() {
    int ang[3]={30, 45, 60};
    float rd;
    for(int i = 0; i < 3; i++) {
        rd=degreeToRadians(ang[i]);
        printf("Seno(%d °) = %.2f\n", ang[i], sin(rd));
        printf("Cosseno(%d °) = %.2f\n", ang[i], cos(rd));
        printf("tangente(%d °) = %.2f\n", ang[i], tan(rd));
        printf("-------------------------------------------");
    }
    return 0;
}