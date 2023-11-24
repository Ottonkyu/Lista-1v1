#include <stdio.h>
#include <string.h>
#include <stdlib.h>    

int numerosromanos(char ch) {
    int numeros;
    switch (ch) {
        case 'I':
            numeros = 1;
            break;
        case 'V':
            numeros = 5;
            break;
        case 'X':
            numeros = 10;
            break;
        case 'L':
            numeros = 50;
            break;
        case 'C':
            numeros = 100;
            break;
        case 'D':
            numeros = 500;
            break;
        case 'M':
            numeros = 1000;
            break;
            exit(0);
    }
    return numeros;
}

void hexadecimal(char romano[],int data, int base) {
    int rem[10], conta = 0;
    char hexa[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    while (data > 0) {
        rem[conta++] = data % 16;
        data = data / 16;
    }
    printf("%s na base %d: ", romano, base);
    while (conta > 0) {
        conta--;
        if (rem[conta] > 9) {
            printf("%c", hexa[rem[conta] - 10]);
        } else {
            printf("%d", rem[conta]);
        }
    }
    printf("\n");
    
}

void binariodecimal( char romano[], int data, int base) {
    int rem[10], conta = 0;

    while (data > 0) {
        rem[conta++] = data % base;
        data = data / base;
    }

    printf("%s na base %d: ", romano, base);
    while (conta > 0) {
        printf("%d", rem[--conta]);
    }
    printf("\n");
}

int main() {
    char romano[100];
    int valor, i, retornar;

    fgets(romano, 100, stdin);
    romano[strlen(romano) - 1] = '\0';
    retornar = strlen(romano);

 
    valor = numerosromanos(romano[retornar - 1]);

    for (i = retornar - 1; i > 0; i--) {
        if (numerosromanos(romano[i]) > numerosromanos(romano[i - 1])) {
            valor = valor - numerosromanos(romano[i - 1]);
        } else {
            valor = valor + numerosromanos(romano[i - 1]);
        }
    }

    binariodecimal(romano, valor, 2);  
    binariodecimal(romano, valor, 10);  
    hexadecimal(romano, valor, 16);             
    return 0;
}
