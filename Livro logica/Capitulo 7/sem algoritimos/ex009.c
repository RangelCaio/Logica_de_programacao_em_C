#include <stdio.h>

int main() {

    int matriz1[3][3], i, j, k;

    printf("#matriz1#\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("#Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\n#Digite o valor da constante de multiplicacao\n");
    scanf("%d", &k);

    printf("\n#Resultado da multiplicacao da matriz1 pela constante k\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz1[i][j] *= k;
            printf("%d  ", matriz1[i][j]);
        }
    printf("\n");
    }

    return 0;
}
