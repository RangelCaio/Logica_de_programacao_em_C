#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Como dividir uma String com a função strtok()

strtok(qual string quero dividir, de que forma quero dividir a string)

ex:

pt = strtok(palavra, " "); achou um espaço, divide a string
pt = strtok(palavra, "!. "); achou um (!. ), divide a string (exclamação ou ponto final ou espaço)


 */

int main(){

    char palavra[50] = {"Bom.dia!.simpatia bom dia"};
    char *pt;


    pt = strtok(palavra, "!. "); //'' = caractere, "" = string
    while(pt != NULL){
        printf("Token: %s\n", pt); // não precisa do ponteiro aqui essa função se preocupa com o fim de cada substring.
        pt = strtok(NULL, "!. "); // Isso vai dizer para a função continuar de onde parou e não do início.
    }


    printf("\n %s \n", *pt);

return 0;
}
