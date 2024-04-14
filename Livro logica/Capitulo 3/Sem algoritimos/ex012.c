#include <stdio.h>

int main(){

float salario, salario_minimo, quantidade;

printf("--- Quantidade de salarios minimos ---\n");

printf("Digite o valor do salario recebido: \n");
scanf("%f", &salario);

printf("Digite o valor do salario minino: \n");
scanf("%f", &salario_minimo);

quantidade = salario / salario_minimo;

printf("A quantidade de salarios minimos recebidos eh: %.2f\n", quantidade);

return 0;
}
