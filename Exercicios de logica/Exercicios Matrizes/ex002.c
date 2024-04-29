#include <stdio.h>

int main(){

    int matriz1[3][3], matriz2[3][3], i, j, operacao[3][3];

    printf("#Primeira matriz#\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor para a posicao: [%d][%d]\n", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("#Segunda matriz#\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor para a posicao: [%d][%d]\n", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            operacao[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
    printf("Resultado da multiplicacao das matrizes\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d   ", operacao[i][j]);
        }
        printf("\n\n");
    }

return 0;
}
