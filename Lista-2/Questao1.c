#include <stdio.h>

int main() {
    int sequencia[10];

 
    for (int i = 0; i < 10; i++) {
        scanf("%d", &sequencia[i]);
    }

    int caixa = 10;

    printf("%d", sequencia[0]);
    for (int i = 1; i < caixa; i++) {
        printf(" %d", sequencia[i]);
    }
    printf("\n");

    while (caixa > 1) {
        for (int i = 0; i < caixa - 1; i++) {
            sequencia[i] += sequencia[i + 1];
        }
        caixa--;

        for (int i = 0; i < caixa; i++) {
            printf("%d", sequencia[i]);
            if (i < caixa - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
