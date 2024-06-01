#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    int i, count = 0;

    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for(i = 0; i < strlen(frase); i++){
        char ch = frase[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            count++;
        }
    }

    printf("A quantidade de vogais eh: %d \n", count);

    return 0;
}
