#include <stdio.h>

int main() {

float l1, l2, area;

printf("Digite o comprimento e a largura em metros: \n");
scanf("%f %f", &l1, &l2);

area = l1 * l2;

printf("A area do terreno eh: %.2f metros quadrados\n", area);

return 0;
}
