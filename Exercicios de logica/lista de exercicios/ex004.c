#include <stdio.h>

int main() {

int idade, dias;
char nome[50];

printf("Digite o seu nome e sua idade: \n");
scanf("%s %d", nome, &idade);

dias = idade * 365;

printf("%s voce tem %d dias de vida\n", nome, dias);

return 0;
}
