#include <stdio.h>

int main() {
    int senha_cadastrada, senha_digitada;
    
    
    printf("Digite a senha a ser cadastrada (4 digitos): ");
    scanf("%d", &senha_cadastrada);
    
    if (senha_cadastrada < 1000 || senha_cadastrada > 9999) {
        printf("Senha invalida. A senha deve conter exatamente 4 digitos.\n");
        return 1;
        }
    printf("senha cadastrada: %d\n", senha_cadastrada);

    do {
        printf("Digite a senha para acessar (4 digitos): ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_cadastrada) {
            printf("senha valida!\n");
            break; 
        } else {
            printf("senha invalida!\n");
        }
    } while (1);

    return 0;
}

















