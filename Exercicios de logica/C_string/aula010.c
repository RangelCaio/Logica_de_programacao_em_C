#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Copiando duas strings com strcpy()

strcpy(destino da copia, origem da copia);

strcpy(palavra2, palavra1);

Copia o conteúdo da string palavra1 (origem)
e armazena em palavra2 (destino).

*/

int main() {

    char palavra1[20];
    char palavra2[20] = {0};

    printf("Digite palavra1: ");
    fgets(palavra1, 20, stdin);

    /*printf("Digite palavra2: ");
    fgets(palavra2, 20, stdin);*/

    printf("\n##Antes de copiar##\n");
    printf("palavra1: %spalavra2: %s", palavra1, palavra2);

    strcpy(palavra2, palavra1);

    printf("\n\n##Depois de copiar##\n");
    printf("palavra1: %spalavra2: %s", palavra1, palavra2);

return 0;
}
