#include <stdio.h>

int main() {

    int matriz1[2][2], matriz2[2][2], i, j, opcao, soma[2][2], sub[2][2], k;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("#Primeira Matriz#\nDigite o numero para a posicao: [%d][%d]\n", i, j);
            scanf("%d", &matriz1[i][j]);

        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("#Segunda Matriz#\nDigite o numero para a posicao: [%d][%d]\n", i, j);
            scanf("%d", &matriz2[i][j]);

        }
    }

    printf("Escolha uma opcao:\n1 - Soma\n2 - Subtracao\n3 - Adicionar constante\n4 - Imprimir\n");
    scanf("%d", &opcao);

    if(opcao == 1) {
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                soma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        printf("#Resultado da soma das duas matrizes#\n");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                printf(" %d   ", soma[i][j]);
            }
            printf("\n\n");
        }
    }
    if(opcao == 2) {
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                sub[i][j] = matriz1[i][j] - matriz2[i][j];
            }
        }
        printf("#Resultado da subtracao das duas matrizes#\n");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                printf(" %d   ", sub[i][j]);
            }
            printf("\n\n");
        }
    }
    if(opcao == 3) {
        printf("#Matriz 1 - adicionar constante#\nDigite o valor da constante: \n");
        scanf("%d", &k);

        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                matriz1[i][j] += k;
            }
        }
        printf("Matriz 1 com constante %d adicionada:\n", k);
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                printf(" %d   ", matriz1[i][j]);
            }
            printf("\n\n");
        }

        printf("#Matriz 2 - adicionar constante#\nDigite o valor da constante: \n");
        scanf("%d", &k);
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                matriz2[i][j] += k;
            }
        }
        printf("Matriz 2 com constante %d adicionada:\n", k);
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                printf(" %d   ", matriz2[i][j]);
            }
            printf("\n\n");
        }
    }
    if(opcao == 4) {
        printf("#Matriz 1#\n");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                printf(" %d   "   , matriz1[i][j]);
            }
        printf("\n\n");
    }
        printf("#Matriz 2#\n");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                printf(" %d   ", matriz2[i][j]);
            }
        printf("\n\n");
    }
    }
return 0;
}
