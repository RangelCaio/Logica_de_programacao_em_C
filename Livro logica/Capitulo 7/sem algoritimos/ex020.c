#include <stdio.h>

int main() {

int matriz1[5][5], i, j, matriz2[5][5], maior = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(matriz1[i][j] > maior){
                maior = matriz1[i][j];
            }
        }
    }

   for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == j){
                matriz2[i][j] = matriz1[i][j] * maior;
            }
            else {
                matriz2[i][j] = matriz1[i][j];
            }
        }
    }

    printf("\n\nMatriz com diagonal principal multiplicada pelo maior numero\n\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d  ", matriz2[i][j]);

        }
        printf("\n\n");
    }

    return 0;
}
