#include <stdio.h>

int main(){

float salario_min, horas_trabalhadas, salario_receber, hora_trabalhada, salario_bruto, hora_extra_rec, horas_extras, valor_hora_extra;

printf("--- Calculo salario --- \n");

printf("Digite o valor do salario minimo: \n");
scanf("%f", &salario_min);

printf("Digite a quantidade de horas trabalhadas: \n");
scanf("%f", &horas_trabalhadas);

printf("Digite a quantidade de horas extras: \n");
scanf("%f", &horas_extras);

hora_trabalhada = 0.125 * salario_min;
valor_hora_extra = 0.25 * salario_min;
salario_bruto = horas_trabalhadas * hora_trabalhada;
salario_receber = salario_bruto + horas_extras * valor_hora_extra;


printf("O salario a receber eh: %.2f\n", salario_receber);



return 0;
}
