#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Como dividir uma String com a fun��o strtok()

strtok(qual string quero dividir, de que forma quero dividir a string)

ex:

pt = strtok(palavra, " "); achou um espa�o, divide a string
pt = strtok(palavra, "!. "); achou um (!. ), divide a string (exclama��o ou ponto final ou espa�o)


 */

int main(){

    char palavra[50] = {"Bom.dia!.simpatia bom dia"};
    char *pt;


    pt = strtok(palavra, "!. "); //'' = caractere, "" = string
    while(pt != NULL){
        printf("Token: %s\n", pt); // n�o precisa do ponteiro aqui essa fun��o se preocupa com o fim de cada substring.
        pt = strtok(NULL, "!. "); // Isso vai dizer para a fun��o continuar de onde parou e n�o do in�cio.
    }


    printf("\n %s \n", *pt);

return 0;
}
