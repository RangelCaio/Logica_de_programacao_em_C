#include <stdio.h>

int main() {

int matriz[10][10], i, j, media;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++) {
            if(i == j){
                media += matriz[i][j];
            }
        }
    }
    printf("\n\n#Matriz#\n\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal da matriz: %d", media);

    return 0;
}
