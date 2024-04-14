#include <stdio.h>

int main() {

float sal, perc, aumento, novosal;

printf("Digite o valor do salario: \n");
scanf("%f", &sal);

printf("Digite o valor do percentual de aumento: \n");
scanf("%f", &perc);

aumento = sal * perc / 100.0;

printf("O valor do aumento eh: %.2f\n", aumento);

novosal = sal + aumento;

printf("O valor do novo salario eh: %.2f\n", novosal);

return 0;
}
