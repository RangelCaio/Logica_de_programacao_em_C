#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Descobrir se uma frase é palíndroma.

    Remover .;!?[\0]

*/

int main(){

    char palavra[50], copia[50];
    int i, tam, diferentes = 0, j = 0;

    printf("Digite uma frase: ");
    scanf("%50[^\n]", palavra);

    //remover espaco vazio, centuacoes ou caracteres indesejados e armazenar em outra variavel.
    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] != '!' && palavra[i] != ' '){
            copia[j++] = palavra[i];
        }
    }

    copia[j] = '\0';

    tam = strlen(copia);
    tam--;

    printf("Original: %s\nCopia: %s\n", palavra, copia);

    for(i = 0; i < strlen(copia); i++){
        if(copia[i] != copia[tam])
            diferentes++;
        tam--;
    }

    if(diferentes == 0)
        printf("\nEh palindroma!\n");
    else
        printf("\nNao eh palindroma!\n");

    return 0;
}
