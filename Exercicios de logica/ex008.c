#include <stdio.h>

int main() {

int nota1, nota2, nota3, media;

printf("Digite as tres notas: \n");
scanf("%d %d %d", &nota1, &nota2, &nota3);

media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / (1 + 2 + 3);

printf("A media ponderada das tres notas eh: %d \n", media);

return 0;
}
