#include <stdio.h>

int main() {

float dolar, marco, libra, real;
const float cotacao_dolar  = 1.80;
const float cotacao_marco  = 2.00;
const float cotacao_libra  = 3.57;

printf("--- Conversor de dinehiro ---\n");

printf("Digite o valor em reais: \n");
scanf("%f", &real);

dolar = real / cotacao_dolar;
marco = real / cotacao_libra;
libra = real / cotacao_marco;

printf("Valor em dolares: %.2f\n", dolar);
printf("Valor em marcos alemaes: %.2f\n", marco);
printf("Valor em libras esterlinas: %.2f\n", libra);

return 0;
}
