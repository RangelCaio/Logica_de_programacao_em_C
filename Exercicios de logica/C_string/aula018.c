#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // pode usar uma funcao para converter os caracteres da string M m


/*
    Procedimento para converter string em maiúsculo.

    strupt(): só funciona no windows
    strlwr(): só funciona no windows

*/

// procedimento para converter string para maiúsculo: toupper(string)
void maiusculo(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        str2[i] = toupper(str1[i]); // essa funcao converte para maiusculo
        i++;
    }
    str2[i] = '\0';
}

// procedimento para converter string para maiúsculo: tolower(string)
void minusculo(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        str2[i] = tolower(str1[i]); // essa funcao converte para minusculo
        i++;
    }
    str2[i] = '\0';
}

int main(){

    char str1[] = "Ola. Bom dia.";
    char str2[50];

    printf("%s\n", str1); //Original

    maiusculo(str1, str2); //Conv maiusculo
    printf("%s\n", str2);

    minusculo(str1, str2); //Conv minusculo
    printf("%s\n", str2);

    return 0;
}
