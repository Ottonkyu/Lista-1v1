#include <stdio.h>

int main() {
    int numero, digito, soma = 0;
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }

    int numero1 = numero;
    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    printf("A soma dos algarismos de %d eh %d\n", numero1, soma);

    return 0;
}