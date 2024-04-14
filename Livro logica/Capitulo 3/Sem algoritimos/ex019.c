#include <stdio.h>

int main(){

float potencia, lado1, lado2, area;

printf("--- Calculo quantidade de luz --- \n");

printf("Digite o valor do primeiro lado do comodo: \n");
scanf("%f", &lado1);

printf("Digite o valor do segundo lado do comodo: \n");
scanf("%f", &lado2);

area = lado1 * lado2;
potencia = 18 * area;

printf("A area do comodo em metros quadrados eh: %.2f\n", area);
printf("A potencia de iluminacao necessaria para o comodo eh: %.2f watss\n", potencia);


return 0;
}
