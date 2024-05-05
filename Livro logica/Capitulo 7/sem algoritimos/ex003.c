#include <stdio.h>

int main() {

    int matriz[6][3], i, j, maior, count_maior_i = 0, count_maior_j = 0, menor, count_menor_i = 0, count_menor_j = 0;

    printf("#matriz#\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um numero para: matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for(i = 0; i < 6; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                count_maior_i = i;
                count_maior_j = j;
            }
        }
    }

    menor = matriz[0][0];

    for(i = 0; i < 6; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                count_menor_i = i;
                count_menor_j = j;
            }
        }
    }

     printf("\n");

    printf("Maior valor: %d \nPosicao: [%d][%d]\n", maior, count_maior_i, count_maior_j);
    printf("\nMenor valor: %d \nPosicao: [%d][%d]", menor, count_menor_i, count_menor_j);

    printf("\n");

return 0;
}
