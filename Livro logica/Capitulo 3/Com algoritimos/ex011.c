#include <stdio.h>
#include <math.h>

int main() {

float num, quad, cubo, r2, r3;

printf("Digite um numero: \n");
scanf("%f", &num);

quad = pow(num, 2);
cubo = pow(num, 3);
r2 = sqrt(num);
r3 = cbrt(num);


printf("O numero elevado ao quadrado eh: %.2f\n", quad);
printf("O numero elevado ao cubo eh: %.2f\n", cubo);
printf("A raiz quadrada do numero eh: %.2f\n", r2);
printf("O raiz cubica do numero eh: %.2f\n", r3);


return 0;
}
