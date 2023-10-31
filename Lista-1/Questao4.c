#include <stdio.h>

int main() {
    char nivel;
    float salario_atual, aumento;

    scanf(" %c", &nivel);
    scanf("%f", &salario_atual);

    aumento = (nivel == 'a') ? 0.05 : (nivel == 'b') ? 0.07 : (nivel == 'c') ? 0.08 : 0.0;

    if (aumento == 0.0) {
        printf("Nivel de experiencia invalido.\n");
    } else {
        float novo_salario = salario_atual * (1 + aumento);
        printf("R$ %.2f\n", novo_salario);
    }

    return 0;
}






