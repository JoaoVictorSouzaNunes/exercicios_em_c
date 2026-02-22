#include <stdio.h>

int main() {
    int nums[10], sumP=0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        if(nums[i]%2==0) {
            sumP+=nums[i];
        }
    }
    printf("A soma dos numeros pares do vetor e %d", sumP);
    return 0;
}