#include <stdio.h>

int main() {

    int matriz1[6][4], i, j, vetor_maior[6];

    printf("#matriz1#\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("#Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        vetor_maior[i] = matriz1[i][0];
        for (j = 0; j < 4; j++) {
            if(matriz1[i][j] > vetor_maior[i]){
                vetor_maior[i] = matriz1[i][j];
            }
        }
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            matriz1[i][j] *= vetor_maior[i];
    }
}
        printf("\n#Matriz multiplicada pelo maior elemento de cada linha#\n\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d  ", matriz1[i][j]);
    }
    printf("\n");
}

    return 0;
}
