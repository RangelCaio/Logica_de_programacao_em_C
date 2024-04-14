#include <stdio.h>

int main(){

float base_maior, base_menor, altura, area;

printf("--- Area do trapezio ---\n");
printf("Digite o valor da base maior: \n");
scanf("%f", &base_maior);

printf("Digite o valor da base menor: \n");
scanf("%f", &base_menor);

printf("Digite o valor da altura: \n");
scanf("%f", &altura);

area = ((base_maior + base_menor) * altura) / 2;

printf("O valor da area do trapezio eh: %.2f\n", area);

return 0;
}
