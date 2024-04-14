#include <stdio.h>

int main() {

float base, altura, area;

printf("Digite tamanho da base do triangulo: \n");
scanf("%f", &base);

printf("Digite tamanho da altura do triangulo: \n");
scanf("%f", &altura);

area = (base * altura) / 2;

printf("A area do triangulo eh: %f\n", area);

return 0;
}
