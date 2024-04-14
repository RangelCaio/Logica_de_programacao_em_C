#include <stdio.h>

int main() {


float hora, min, horamin, tot_min, minseg;

printf("--- Conversor de horas e minutos ---\n");

printf("Digite o valor das horas: \n");
scanf("%f", &hora);

printf("Digite o valor dos minutos: \n");
scanf("%f", &min);

horamin = hora * 60;
tot_min = horamin + min;
minseg = tot_min * 60;

printf("Valor da opcao horas convertido em minutos eh: %.2f\n", horamin);
printf("Valor total em minutos eh: %.2f\n", tot_min);
printf("O total de minutos convertido em segundo eh: %.2f\n", minseg);

return 0;
}
