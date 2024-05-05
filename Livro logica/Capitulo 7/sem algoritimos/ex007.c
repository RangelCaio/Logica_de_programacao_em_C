#include <stdio.h>

int main() {


    int matriz1[4][6], i, j, matriz2[6][4], soma_linhas[4] = {0}, soma_colunas[4] = {0};

    printf("#matriz1#\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("Digite um número para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("#matriz2#\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite um número para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            soma_linhas[i] += matriz1[i][j];
        }
    }

    for (j = 0; j < 4; j++) {
        for (i = 0; i < 6; i++) {
            soma_colunas[j] += matriz2[i][j];
        }
    }

    printf("\nSoma das linhas de M com as colunas de N:\n");
    for (j = 0; j < 4; j++) {
        printf("Linha %d de M com coluna %d de N: %d\n", j, j, soma_linhas[j] + soma_colunas[j]);
    }

    return 0;
}
