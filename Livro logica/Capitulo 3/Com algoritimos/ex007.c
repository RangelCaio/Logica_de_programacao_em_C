#include <stdio.h>

int main() {

float sal, salreceber, imp;

printf("Digite o valor do salario: \n");
scanf("%f", &sal);

imp = sal * 10.0 / 100.0;
salreceber = sal + 50 - imp;

printf("O salario a receber eh: %f\n", salreceber);

return 0;
}
