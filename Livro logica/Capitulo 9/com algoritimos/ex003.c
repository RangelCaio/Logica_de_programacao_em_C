#include <stdio.h>
#include <string.h>

int main() {

    char frase[1000];
    int count_palavras = 0;


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    char *token = strtok(frase, " \t\n\r");
    while(token != NULL){
        count_palavras++;
        token = strtok(NULL, " \t\n\r");
    }

    printf("A quantidade de palavras da frase eh: %d\n", count_palavras);

return 0;
}
