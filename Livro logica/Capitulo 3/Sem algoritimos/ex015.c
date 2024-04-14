#include <stdio.h>

int main(){

float salario, qnt_contas, salario_final, multa;

printf("Digite o salario de Joao: \n");
scanf("%f", &salario);

printf("Digite a quantidade de contas atrasadas: \n");
scanf("%f", &qnt_contas);


multa = qnt_contas * (salario * 0.02);
salario_final = salario - multa;

printf("O valor da multa foi de: %.2f\n", multa);
printf("O salario final de foi eh: %.2f\n", salario_final);


return 0;
}
