#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[31];
    char posicao;
    int forca;
};

float calcularforca(struct Jogador jogadores[], int numjogadores) {
    int forcagoleiro = 0;
    int forcalaterais = 0;
    int forcazagueiros = 0;
    int forcavolantes = 0;
    int forcameias = 0;
    int forcaatacantes = 0;

    for (int i = 0; i < numjogadores; i++) {
        if (jogadores[i].posicao == 'G') {
            forcagoleiro = jogadores[i].forca;
        } else if (jogadores[i].posicao == 'L') {
            forcalaterais += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'Z') {
            forcazagueiros += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'V') {
            forcavolantes += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'M') {
            forcameias += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'A') {
            forcaatacantes += jogadores[i].forca;
        }
    }

    float forcatotal = (8 * forcagoleiro + 10 * (forcalaterais) + 5 * (forcazagueiros) + 8 * (forcavolantes) + 11 * (forcameias) + 12 * (forcaatacantes)) / 100.0;
    return forcatotal;
}

int main() {
    struct Jogador jogadorestime1[11];
    struct Jogador jogadorestime2[11];

    char nometime1[31];
    char nometime2[31];

    fgets(nometime1, sizeof(nometime1), stdin);
    nometime1[strlen(nometime1) - 1] = '\0'; 

    for (int i = 0; i < 11; i++) {
        char nome[31];
        char posicao;
        int forca;
        scanf("%30[^;]; %c; %d%*c", nome, &posicao, &forca);
        strcpy(jogadorestime1[i].nome, nome);
        jogadorestime1[i].posicao = posicao;
        jogadorestime1[i].forca = forca;
    }

    fgets(nometime2, sizeof(nometime2), stdin);
    nometime2[strlen(nometime2) - 1] = '\0'; 

    for (int i = 0; i < 11; i++) {
        char nome[31];
        char posicao;
        int forca;
        scanf("%30[^;]; %c; %d%*c", nome, &posicao, &forca);
        strcpy(jogadorestime2[i].nome, nome);
        jogadorestime2[i].posicao = posicao;
        jogadorestime2[i].forca = forca;
    }

    float forcatime1 = calcularforca(jogadorestime1, 11);
    float forcatime2 = calcularforca(jogadorestime2, 11);

    printf("%s: %.2f de forca\n", nometime1, forcatime1);
    printf("%s: %.2f de forca\n", nometime2, forcatime2);

    if (forcatime1 > forcatime2) {
        printf("%s eh mais forte\n", nometime1);
    } else if (forcatime1 < forcatime2) {
        printf("%s eh mais forte\n", nometime2);
    } else {
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}
