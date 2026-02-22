#include <stdio.h>

int main() {
    int nums[5];
    int i = 0;
    for(i = 0; i < 5; i++) {
        printf("Digite o primeiro valor: ");
        scanf("%d", &nums[i]);
    }
    int sum = 0;
    for(i = 0; i < 5; i++) {
        sum+=nums[i];
    }
    printf("A soma dos elementos do vetor resultou em: %d", sum);
    return 0;
}