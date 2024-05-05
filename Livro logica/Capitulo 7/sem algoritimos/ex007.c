#include <stdio.h>

int main() {

    int matriz1[4][6], matriz2[6][4], i, j;

    printf("#matriz1#\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("Digite um numero para: matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("#matriz2#\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um numero para: matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nMatriz resultante da soma de cada elemento pela soma da coluna correspondente:\n\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            matriz1[i][j] += matriz2[i][j];
            printf("%d   ", matriz1[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}
