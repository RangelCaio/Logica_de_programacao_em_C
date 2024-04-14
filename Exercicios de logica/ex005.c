#include <stdio.h>

int main() {

int quantidade;
float valor_gasolina, valor_pagar;

printf("Digite o valor do litro de gasolina: \n");
scanf("%f", &valor_gasolina);

printf("Digite a quantidade de gasolina colocar em litros: \n");
scanf("%d", &quantidade);

valor_pagar = quantidade * valor_gasolina;

printf("O valor a pagar eh: %.2f Reais\n", valor_pagar);

return 0;
}
