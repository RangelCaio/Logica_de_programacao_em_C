#include <stdio.h>
/*CORRIGIR CODIGO*/
int main(){

    int matriz[2][4], matriz_pares[2][4], i, j, count = 0, linha[2], count_matriz = 0, media;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] >= 12 && matriz[i][j] <= 20){
                count++;
            }
        linha[i] = count;
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] % 2 == 0){
                media += matriz[i][j];;
                count++;
            }
        }
    }
    media /= count;



    printf("#Matriz#\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("%d  ", matriz[i][j]);
        }
    printf("\n");
    }
    printf("\n#Quantidade de numeros entre 12 e 20#\n");
    for(i = 0; i < 2; i++){
        printf("Linha %d: %d\n", i, linha[i]);
    }
    printf("\n#Media dos elementos pares da matriz: %d", media);



return 0;
}
