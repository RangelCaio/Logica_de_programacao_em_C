#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int tamanho, i /*count_string = 0*/;
    char palavra[20]/* = ("Ola mundo. tudo bem?")*/;

    //printf("Digite uma frase: \n");
    //gets(palavra);
    fgets(palavra, 20, stdin);
    //(tamanho do vetor, tamanho da string, stdin - teclado);

 i = 0;
    while(palavra[i] != '\0'){
        if(palavra[i] == '\n') //essa sequência retira o enter(\n) da contagem da string
            palavra[i] = '\0';
        i++;
        }
/*
    i = 0;
    while(palavra[i] != '\0'){ // Identifica fim da string \0
         count_string++; //conta o tamanho da string
         i++;
    }

    tamanho = strlen(palavra); // função strlen(nome_string), conta quantos caracteres possui.

    printf("Tamanho: %d\n", tamanho);


    Ou
*/
    printf("Tamanho: %d\n", strlen(palavra));



return 0;
}
