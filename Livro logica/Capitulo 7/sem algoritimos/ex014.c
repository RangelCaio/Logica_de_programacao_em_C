#include <stdio.h>

int main() {

    int matriz1[2][3], i, j, count = 0;

    printf("#matriz1[2][3]#\n\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("#Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if(matriz1[i][j] <= 4 || matriz1[i][j] >= 16){
                count++;
            }
        }
    }
    printf("\n");
    printf("#matriz1");
    printf("\n\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", matriz1[i][j]);
        }
    printf("\n");
    }
    printf("\n A quantidade de elementos que nao pertencem ao intervalo [5,15] eh: %d\n", count);

    return 0;
}
