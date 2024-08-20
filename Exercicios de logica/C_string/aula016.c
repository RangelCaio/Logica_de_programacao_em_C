#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    Descobrir se uma palavra é palíndroma.

 */
/*

Primeira opção

int main(){

    char palavra[30], copia[30];
    int i, tam, iguais = 0;


    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra); // conta quantos caracteres tem a string.

    for(i = 0; i < strlen(palavra); i++){ //colocar diretamente a função para não dar erro de contagem.
        copia[i] = palavra[tam - 1];
        tam--;
    }

    copia[i] = '\0';
    tam = strlen(palavra);

    printf("Original: %s\nCopia: %s\n", palavra, copia);

    for(i = 0; i < tam; i++){
        if(palavra[i] == copia[i]){
            iguais++;
        }
    }

    if(tam == iguais)
        printf("\n Eh palidroma...\n");
    else
        printf("\n Nao eh palidroma...\n");
        return 0;
}

*/

// Segunda solução (melhor)

int main(){

    char palavra[30];
    int i, tam, iguais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    tam--;
    i = 0;

    while(tam >= i){
        if(palavra[i] != palavra[tam])
            iguais++;
        i++;
        tam--;
    }

    if(iguais == 0)
        printf("\nEh palindroma!\n");
    else
        printf("\nNao eh palindroma!\n");

    return 0;
}
