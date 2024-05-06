#include <stdio.h>

int main() {

int matriz[8][6], i, j, pares[8] = {0};

    for(i = 0; i < 8; i++){
        for(j = 0; j < 6; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 6; j++) {
            if(matriz[i][j] % 2 == 0){
                pares[i] += matriz[i][j];
            }
        }
    }

    printf("\n\nSoma dos elementos pares de cada linha\n");
    for(i = 0; i < 8; i++){
        printf("[%d]", pares[i]);
    }
    printf("\n");
    return 0;
}
