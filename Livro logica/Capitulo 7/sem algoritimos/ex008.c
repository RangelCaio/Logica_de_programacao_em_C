#include <stdio.h>

int main() {

    int matriz1[3][8], i, j, matriz2[3][8], matrizmult[3][8], matrizsub[3][8];

    printf("#matriz1#\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) {
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("#matriz2#\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) {
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nResultado da subtracao da matriz1 pela matriz2\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) {
            matrizsub[i][j] = matriz1[i][j] - matriz2[i][j];
            printf("%d  ", matrizsub[i][j]);
        }
        printf("\n");
    }

    printf("\nResultado da multiplicacao da matriz1 pela matriz2\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) {
            matrizmult[i][j] = matriz1[i][j] * matriz2[i][j];
            printf("%d  ", matrizmult[i][j]);
        }
        printf("\n");
    }


    return 0;
}
