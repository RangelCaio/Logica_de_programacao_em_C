#include <stdio.h>

int main() {

float ang1, ang2, ang3;

printf("--- Descobrindo o terceiro angulo do triangulo ---\n");
printf("Digite a medida do primeiro angulo: \n");
scanf("%f", &ang1);

printf("Digite a medida do segundo angulo: \n");
scanf("%f", &ang2);

ang3 = 180 - ang1 - ang2;

printf("A medida do terceiro angulo eh: %.2f\n", ang3);


return 0;
}
