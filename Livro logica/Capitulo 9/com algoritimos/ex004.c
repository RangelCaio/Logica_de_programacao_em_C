#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    int frequencia[256] = {0};
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for (i = 0; i < strlen(frase); i++) {
        frequencia[(int)frase[i]]++;
    }

    printf("Letras repetidas na frase:\n");
    for (i = 0; i < 256; i++) {
        if (frequencia[i] > 1) {
            printf("'%c': %d vezes\n", (char)i, frequencia[i]);
        }
    }

    return 0;
}
