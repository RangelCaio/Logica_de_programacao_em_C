#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // pode usar uma funcao para converter os caracteres da string M m


/*
    Converter numero para string em C
*/


int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    char palavras[tam];

    printf("Digite uma frase: ");
    scanf("%50[^\n]", palavras);

    //fgets();
//continuar
    return 0;
}
