#include <stdio.h>

int main() {

int matriz[5][5], i, j, vetor_l[5] = {0}, vetor_c[5] = {0};



    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++) {
            vetor_l[i] += matriz[i][j];
            }
        }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++) {
            vetor_c[j] += matriz[i][j];
            }
        }
    printf("\n\n#Vetor soma das linhas da matriz#\n");
    for(i = 0; i < 5; i++){
        printf("[%d]", vetor_l[i]);
    }
    printf("\n\n#Vetor soma das colunas da matriz#\n");
    for(i = 0; i < 5; i++){
        printf("[%d]", vetor_c[i]);
    }
    printf("\n");

    return 0;
}
