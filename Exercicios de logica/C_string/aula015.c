#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    Matriz de Strings na linguagem C

    Usar apenas linhas(i)

 */

int main(){

    char nomes[5][25];
    int i;

    for(i = 0; i < 5; i++){
        printf("\nDigite o nome da posicao [%d]: ", i);
        scanf("%24[^\n]%*c", nomes[i]); // L� tudo at� apertar o enter e olhar s� as linhas(i) com os nomes.

    }

    for(i = 0; i < 5; i++)
        printf("\nNome na posicao %d: %s", i, nomes[i]);

    return 0;
}
