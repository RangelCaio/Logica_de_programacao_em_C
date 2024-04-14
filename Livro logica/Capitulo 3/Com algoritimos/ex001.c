#include <stdio.h>

int main() {

float n1, n2, n3, n4, soma;

printf("Digite o primeiro numero: \n");
scanf("%f", &n1);

printf("Digite o segundo numero: \n");
scanf("%f", &n2);

printf("Digite o terceiro numero: \n");
scanf("%f", &n3);

printf("Digite o quarto numero: \n");
scanf("%f", &n4);

soma = n1 + n2 + n3 + n4;

printf("O valor da soma eh: %.2f\n", soma);


return 0;
}
