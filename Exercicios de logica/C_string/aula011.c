#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Procurando caracteres em uma string com as
funções strchr e strrchr.

strchr -> retorna a primeira ocorrência
strchr(palavra, 'a');
strchr(em qual string procurar, qual caractere pesquisar)
strrchr -> retorna a última ocorrência

 */

int main() {

    char palavra[50] = {"abacate"};
    char *letra; //* diz que a variável letra não vai armazenar um caractere, mas sim um ponteiro para um caractere.

    /*printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);*/

    letra = strchr(palavra, 'a'); // criar variável para receber resultado da função

    printf("\n%c", *letra); // para imprimir variável com ponteiro usar *nome
    printf("%c", *(letra + 1));
    printf("%c", *(letra + 2));
    printf("%c", *(letra + 3));
    printf("%c", *(letra + 4));
    printf("%c", *(letra + 5));
    printf("%c\n", *(letra + 6));

return 0;
}
