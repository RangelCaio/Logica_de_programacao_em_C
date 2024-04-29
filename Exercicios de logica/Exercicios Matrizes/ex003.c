#include <stdio.h>
#include <math.h>

int main(){

    int matriz1[3][3], i, j, quad[3][3];

    printf("#Primeira matriz#\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor para a posicao: [%d][%d]\n", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            quad[i][j] = matriz1[i][j] * matriz1[i][j];
        }
    }
    printf("Resultado do quadrado dos elementos das matrizes\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d   ", quad[i][j]);
        }
        printf("\n\n");
    }

return 0;
}
