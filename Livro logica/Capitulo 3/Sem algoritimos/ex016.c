#include <stdio.h>
#include <math.h>

int main(){

float cateto1, cateto2, hipotenusa, hipotenusa_final;

printf("--- Calculo hipotenusa --- \n");
printf("Digite o valor do primeiro cateto: \n");
scanf("%f", &cateto1);

printf("Digite o valor do segundo cateto: \n");
scanf("%f", &cateto2);

hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));


printf("O valor da hipotenusa eh: %.2f\n", hipotenusa);



return 0;
}
