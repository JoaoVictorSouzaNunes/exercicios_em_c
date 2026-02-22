#include <stdio.h>
#include <string.h>
int a = 2;

void inic1(int a) {
    a=2;
}

void inic2(int n, int v[n]) {
    for(int i = 0; i < n; i++) {
        v[i]=2;
    }
}

int main() {
     int v[20];

    inic1(a);
    inic2(20, v);
    printf("a=%d\n", a);
    for(int i = 0; i < 20; i++) {
        printf("v[%d]=%d\t", i, v[i]);
    }
    printf();
    return 0;
}
