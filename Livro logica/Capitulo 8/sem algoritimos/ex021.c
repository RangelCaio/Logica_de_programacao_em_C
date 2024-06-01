#include <stdio.h>

int maior_matriz(int matriz[10][10]){

    int maior_diag = matriz[0][0];

    for(int i = 0; i < 10; i++){
        if(matriz[i][i] > maior_diag){
            maior_diag = matriz[i][i];
        }
    }

    return maior_diag;
}

int main() {

    int matriz[10][10], i ,j, maior;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = maior_matriz(matriz);

    printf("\n# O maior numero da diagonal principal da matriz eh: %d #\n", maior);

    return 0;
}
