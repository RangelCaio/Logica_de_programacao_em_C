#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Procurando caracteres em uma string com as
fun��es strchr e strrchr.

strchr -> retorna a primeira ocorr�ncia
strchr(palavra, 'a');
strchr(em qual string procurar, qual caractere pesquisar)
strrchr -> retorna a �ltima ocorr�ncia

 */

int main() {

    char palavra[50] = {"abacate"};
    char *letra; //* diz que a vari�vel letra n�o vai armazenar um caractere, mas sim um ponteiro para um caractere.

    /*printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);*/

    letra = strchr(palavra, 'a'); // criar vari�vel para receber resultado da fun��o

    printf("\n%c", *letra); // para imprimir vari�vel com ponteiro usar *nome
    printf("%c", *(letra + 1));
    printf("%c", *(letra + 2));
    printf("%c", *(letra + 3));
    printf("%c", *(letra + 4));
    printf("%c", *(letra + 5));
    printf("%c\n", *(letra + 6));

return 0;
}
