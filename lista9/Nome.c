#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char name[100];
    printf("Digite seu nome completo: ");
    gets(name);
    int len=0, c;
    do{
        c=name[len];
        len+=1;
    } while(c!='\0');
    printf("O seu nome tem %d caracteres", len);
    return 0;
}