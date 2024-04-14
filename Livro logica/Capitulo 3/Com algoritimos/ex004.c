#include <stdio.h>

int main() {

float sal, novosal;

printf("Digite o valor do salario: \n");
scanf("%f", &sal);

novosal = sal + sal * 25.0 / 100.0;

printf("O valor do novo salario eh: %f\n", novosal);

return 0;
}
