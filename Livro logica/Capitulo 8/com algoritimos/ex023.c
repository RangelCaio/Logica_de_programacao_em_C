#include <stdio.h>

void funcao_vetor(int matriz[3][4], int vetor[12]) {

    int k = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            vetor[k] = matriz[i][j];
            k++;
        }
    }
}

int main() {

    int matriz[3][4], vetor[12], i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    funcao_vetor(matriz, vetor);

    printf("\n## matriz tranformada em vetor ##\n");
    printf("\n## vetor");
    for(i = 0; i < 12; i++) {
        printf("[%d]", vetor[i]);
    }
    printf(" ##\n");

return 0;
}

