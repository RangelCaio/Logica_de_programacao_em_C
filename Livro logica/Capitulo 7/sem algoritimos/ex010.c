#include <stdio.h>

int main() {

    int matriz1[5][5], i, j, soma_l4 = 0, soma_c2 = 0, soma_dp = 0, soma_ds = 0, soma_total = 0;

    printf("#matriz1#\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("#Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

                if(i == 3){
                    soma_l4 += matriz1[i][j];
                }
                if(j == 1){
                    soma_c2 += matriz1[i][j];
                }
                if(i == j){
                    soma_dp += matriz1[i][j];
                }
                if(i + j == 4){
                    soma_ds += matriz1[i][j];
                }

                soma_total += matriz1[i][j];

        }
    }

    printf("\nSoma dos elementos da linha 4: %d\n", soma_l4);
    printf("\nSoma dos elementos da coluna 2: %d\n", soma_c2);
    printf("\nSoma dos elementos da diagonal principal: %d\n", soma_dp);
    printf("\nSoma dos elementos da diagonal secundaria: %d\n", soma_ds);
    printf("\nSoma dos elementos da matriz: %d\n", soma_total);


    return 0;
}
