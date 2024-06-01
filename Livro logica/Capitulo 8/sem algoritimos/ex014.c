#include <stdio.h>

// CORRIGIR

void separar(int vetor1[30], int negativos[30], int positivos[30], int *pos, int *neg) {

    int i;

    *pos = 0;
    *neg = 0;

    for(i = 0; i < 30; i++){
        if (vetor1[i] > 0) {
            positivos[(*pos)++] = vetor1[i];
            (*pos)++;
        }
        if (vetor1[i] <= 0) {
            negativos[(*neg)++] = vetor1[i];
            (*neg)++;
        }
    }
}


int main(){

    int vetor1[30], positivos[30], negativos[30], i, pos, neg;

    for(i = 0; i < 30; i++) {
        printf("Digite um numero para vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    separar(vetor1, positivos, negativos, &pos, &neg);

    printf("positivos");
    for(i = 0; i < pos; i++) {
            printf("[%d]", positivos[i]);
    }


    printf("\nnegativos");
    for(i = 0; i < neg; i++) {
            printf("[%d]", negativos[i]);
        }


return 0;
}
