#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Concatenando duas strings com strcat.
Ela vai juntar a palavra2 ao final da palavra1
assim, quando for printar, printar palavra1.

*/

int main() {

    char palavra1[20] = ("Ola: "), palavra2[20];
    printf("Digite o seu nome: ");
    fgets(palavra2, 20, stdin);

    strcat(palavra1, palavra2);

    //strcat(palavra, palavra2); ou
    printf("\n%s\n", palavra1);

return 0;
}
