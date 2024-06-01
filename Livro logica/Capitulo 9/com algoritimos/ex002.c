#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    int i, count_minusculas = 0, count_maiusculas = 0;

    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for(i = 0; i < strlen(frase); i++){
        char ch = frase[i];
        if(ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' ||
        ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n'
        || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'v'
         || ch == 'x' || ch == 'z'){
            count_minusculas++;
        }
        if(ch == 'B' || ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' ||
        ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N'
        || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'V'
         || ch == 'X' || ch == 'Z'){
            count_maiusculas++;
        }
    }

    printf("A quantidade de consoantes minusculas eh: %d \n", count_minusculas);
    printf("A quantidade de consoantes Maiusculas eh: %d \n", count_maiusculas);
    printf("A quantidade de total de consoantes eh: %d \n", count_minusculas+count_maiusculas);

    return 0;
}



