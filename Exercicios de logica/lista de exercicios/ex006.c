#include <stdio.h>

int main() {

float peso, valor;

printf("Digite o peso do prato em quilos: ");
scanf("%f", &peso);

valor = peso * 12;

printf("O valor da refeicao eh: %.2f Reais\n", valor);

return 0;
}
