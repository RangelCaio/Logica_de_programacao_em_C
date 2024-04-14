#include <stdio.h>

int main(){

float peso_quilo, peso_grama;

printf("Digite o peso em quilos: \n");
scanf("%f", &peso_quilo);


peso_grama = peso_quilo * 1000;

printf("O valor do peso em gramas eh: %.2f\n", peso_grama);

return 0;
}
