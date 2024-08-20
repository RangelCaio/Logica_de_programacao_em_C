#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Comparando duas strings com strcmp()
em ordem de ocorrência alfabética.

a < b < c < d < e < f < g < h...
abacate < bolo < cuzcuz < dado < elefante...
abacate ocorre antes de bolo, que ocorre antes de cuzcuz. -1 (a < b < c)
cuzcuz ocorre antes de bolo, que ocorre antes de abacate. 1 (a > b > c)

Resultado:

0 == strings iguais.
-1 == string1 < string2.
1 == string1 > string2.

*/

int main() {

    char palavra1[20];
    char palavra2[20];

    printf("Digite palavra1: ");
    fgets(palavra1, 20, stdin);

    printf("Digite palavra2: ");
    fgets(palavra2, 20, stdin);

    //strcmp(palavra1, palavra2);

    //strcmp(palavra, palavra2); ou
    printf("\nResultado: %d\n", strcmp(palavra1, palavra2));

return 0;
}
