#include <stdio.h>

int main() {
    int senha_cadastrada, senha_digitada;
    
    scanf("%d", &senha_cadastrada);
    
    if (senha_cadastrada < 1000 || senha_cadastrada > 9999) {
        printf("senha invalida!\n");
        return 1;
        }
    printf("senha cadastrada: %d\n", senha_cadastrada);

    do {
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

















