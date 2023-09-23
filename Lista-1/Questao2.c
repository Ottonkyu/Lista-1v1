#include <stdio.h>

int main() {
    int numero, digito, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d e par.\n", numero);
    } else {
        printf("%d e impar.\n", numero);
    }

    int numero1 = numero;
    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    printf("A soma dos digitos de %d e %d.\n", numero1, soma);

    return 0;
}