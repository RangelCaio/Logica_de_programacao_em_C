#include <stdio.h>

int main() {

float dep, taxa, rend, total;

printf("Digite o valor do deposito: \n");
scanf("%f", &dep);

printf("Digite o valor da tava de juros: \n");
scanf("%f", &taxa);

rend = dep * taxa / 100.0;
total = dep + rend;

printf("O valor do rendimento foi: %f\n", rend);
printf("O valor total com o rendimento foi: %f\n", total);

return 0;
}
