#include <stdio.h>

int main(){

float n1, n2, n3, mult;

printf("Digite o primeiro numero: \n");
scanf("%f", &n1);

printf("Digite o segundo numero: \n");
scanf("%f", &n2);

printf("Digite o terceiro numero: \n");
scanf("%f", &n3);

mult = n1 * n2 * n3;

printf("O valor da multiplicacao eh: %.2f\n", mult);


return 0;
}
