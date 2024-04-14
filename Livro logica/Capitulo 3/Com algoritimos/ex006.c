#include <stdio.h>

int main() {

float sal, salreceber, grat, imp;

printf("Digite o valor do salario: \n");
scanf("%f", &sal);

grat = sal * 5.0 / 100.0;
imp = sal * 7.0 / 100.0;

salreceber = sal + grat - imp;

printf("O salario a receber eh: %f\n", salreceber);

return 0;
}
