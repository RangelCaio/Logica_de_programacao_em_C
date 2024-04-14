#include <stdio.h>

int main(){

float diagonal_maior, diagonal_menor, area;

printf("--- Area do losango ---\n");

printf("Digite o valor da diagonal maior: \n");
scanf("%f", &diagonal_maior);

printf("Digite o valor da diagonal menor: \n");
scanf("%f", &diagonal_menor);

area = (diagonal_maior * diagonal_menor) / 2;

printf("O valor da area do losango eh: %.2f\n", area);

return 0;
}
