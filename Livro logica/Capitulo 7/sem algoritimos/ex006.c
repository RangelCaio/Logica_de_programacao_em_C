#include <stdio.h>

int main() {

    int matriz[20][10], i, j, soma_colunas[10];

    printf("#matriz#\n");
    for(i = 0; i < 20; i++){
        for(j = 0; j < 10; j++){
            printf("Digite um numero para: matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j = 0; j < 10; j++){
        soma_colunas[j] = 0;
        for(i = 0; i < 20; i++){
            soma_colunas[j] += matriz[i][j];
        }
    }


    printf("\nMatriz resultante da multiplicacao de cada elemento pela soma da coluna correspondente:\n");
    for(i = 0; i < 20; i++){
        for(j = 0; j < 10; j++){
            matriz[i][j] *= soma_colunas[j];
            printf("%d   ", matriz[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}
