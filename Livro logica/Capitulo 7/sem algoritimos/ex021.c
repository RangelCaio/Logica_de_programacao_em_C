#include <stdio.h>

int main() {

int matriz1[5][5], i, j, matriz2[5][5], vetor[5] = {0};

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == j){
                vetor[i] = matriz1[i][j];
            }
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz2[i][j] = matriz1[i][j] * vetor[i];
        }
    }


    printf("\n\n#Matriz com linha multiplicada pelo elemento da diagonal principal#\n\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d  ", matriz2[i][j]);

        }
        printf("\n\n");
    }

    return 0;
}
