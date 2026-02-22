#include <stdio.h>

int indexArray(int n, float v[n], float a) {
    int id=-1;
    for(int i = 0; i < n; i++) {
        if(v[i]==a) {
            id=i;
            break;
        }
    }
    return id;
}

void inic(int n, int v[n]) {
    for(int i = 0; i < n; i++) {
        v[i]=0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    float numsDiff[n], num;
    int repetitions[n], id, c=0;
    inic(n, numsDiff);
    inic(n, repetitions);
    for(int i = 0; i < n; i++) {
        scanf("%f", &num);
        id=indexArray(n, numsDiff, num);
        if(id>=0) {
            repetitions[id]++;
        } else {
            if(repetitions[c]>0) {
                c++;
            }
            numsDiff[c]=num;
            repetitions[c]++;
            c++;
        }
    }
    for(int i = 0; i < c; i++) {
        printf("%.2f ocorre %d vez", numsDiff[i], repetitions[i]);
        if(repetitions[i]>1) {
            printf("es");
        }
        printf("\n");
    }
    return 0;
}