#include <stdio.h>
#include <string.h>

void leiamatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrematriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void somamatriz(int A[4][4], int B[4][4], int result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void submatriz(int A[4][4], int B[4][4], int result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multmatriz(int A[4][4], int B[4][4], int result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    char operacao[4];

    leiamatriz(matrizA);
    leiamatriz(matrizB);
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        somamatriz(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "sub") == 0) {
        submatriz(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "mult") == 0) {
        multmatriz(matrizA, matrizB, resultado);
    }

    mostrematriz(resultado);

    return 0;
}
