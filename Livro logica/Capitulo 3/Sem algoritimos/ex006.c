#include <stdio.h>

int main(){

float peso, peso15, peso20;

printf("Digite o peso da pessoa: \n");
scanf("%f", &peso);

peso15 = peso * 1.15;
peso20 = peso * 1.20;


printf("O valor do peso com aumento de 15 porcento foi: %.2f\n", peso15);
printf("O valor do peso com aumento de 20 porcento foi: %.2f\n", peso20);

return 0;
}
