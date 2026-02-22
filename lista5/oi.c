#include <stdio.h>

void inic1(int n, int s[n]) {
    for(int i = 0; i < n; i++) {
        s[i]=i;
    }
}

int main() {
    int v[20];
    inic1(20, v);
    for(int i = 0; i < 20; i++) {
        printf("O %d elemento do vetor vale %d\n", i, v[i]);
    }
    return 0;
}