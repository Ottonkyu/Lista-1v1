#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Os valores lidos sao iguais\n");
    } else {
        int maior = (a > b) ? a : b;
        int menor = (a < b) ? a : b;

        printf("O maior valor e %d e %s multiplo de %d\n", maior, (maior % menor == 0) ? "e" : "nao e", menor);
    }

    return 0;
}