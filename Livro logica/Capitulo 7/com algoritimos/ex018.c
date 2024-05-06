#include <stdio.h>

int main() {

int matriz1[3][6], i, j, vetor[18] = {0};

    for(i = 0; i < 18; i++){
            printf("Digite um numero para vetor[%d]: ", i);
            scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 6; j++) {
            matriz1[i][j] = vetor[i * 6 + j];
        }
    }

    printf("\n\n#Matriz formada a partir do vetor#\n\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 6; j++) {
            printf("%d  ", matriz1[i][j]);

        }
        printf("\n\n");
    }

    return 0;
}
