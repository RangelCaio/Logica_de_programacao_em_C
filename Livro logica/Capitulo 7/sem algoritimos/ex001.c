#include <stdio.h>

int main(){
    int matriz[3][5], i, j, count = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            if(matriz[i][j] >= 15 && matriz[i][j] <= 20){
                count++;
            }
        }
    }
    printf("#Matriz#\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%d  ", matriz[i][j]);
        }
    printf("\n");
    }
    printf("\nQuantidade de numeros entre 15 e 20: %d\n", count);

return 0;
}
