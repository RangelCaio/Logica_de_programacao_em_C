#include <stdio.h>

int main(){

float qnt_lados_pol, qnt_diagonais_pol;

printf("--- Calculo numero de lados de um poligono --- \n");

printf("Digite o valor da quantidade de lados de um poligono: \n");
scanf("%f", &qnt_lados_pol);


qnt_diagonais_pol = qnt_lados_pol * (qnt_lados_pol - 3) / 2;


printf("A quantidade de diagonais do poligono eh: %.2f\n", qnt_diagonais_pol);


return 0;
}
