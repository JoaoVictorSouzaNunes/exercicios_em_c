#include <stdio.h>
#include <math.h>

int main() {
    int n, dig[(int) log10(n)], c, i=0;
    do {
        dig[i]=n%10;
        c=n/10;
        i++;
    } while(c>0);
    short ispalindromo=1;
    for(int x = 0; x < c; x++) {
        if(dig[x]!=dig[c-1-x]) {
            ispalindromo=0;
            break;
        }
    }
    if(ispalindromo) {
        printf("%d e palindromo", n);
    } else {
        printf("%d nao e palindromo", n);
    }
    return 0;
}