#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Localizando uma substring com a fun��o strstr()
substring -> � uma palavra

 */

int main() {

    char palavra[50] = {"Bom dia simpatia"};
    char str[] = {"dia"};
    char *ponteiro; //* diz que a vari�vel n�o vai armazenar um caractere, mas sim um ponteiro para um caractere.

    /*printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);*/

    ponteiro  = strstr(palavra, str); // criar vari�vel para receber resultado da fun��o

    if(ponteiro != NULL)
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2)); // para imprimir vari�vel com ponteiro usar *nome, *(nome + 1...)
    else
        printf("\nPonteiro nulo.\n");

return 0;
}
