#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Localizando uma substring com a função strstr()
substring -> é uma palavra

 */

int main() {

    char palavra[50] = {"Bom dia simpatia"};
    char str[] = {"dia"};
    char *ponteiro; //* diz que a variável não vai armazenar um caractere, mas sim um ponteiro para um caractere.

    /*printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);*/

    ponteiro  = strstr(palavra, str); // criar variável para receber resultado da função

    if(ponteiro != NULL)
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2)); // para imprimir variável com ponteiro usar *nome, *(nome + 1...)
    else
        printf("\nPonteiro nulo.\n");

return 0;
}
