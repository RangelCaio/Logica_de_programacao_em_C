#include <stdio.h>

int main() {

float sal_min, nht, ndep, nhet, sal_receber, vh, smes, vhe, imp, sbruto, sliq, grat, vdep;

printf("Digite o salario minimo: \n");
scanf("%f", &sal_min);

printf("Numero de horas trabalhadas: \n");
scanf("%f", &nht);

printf("Digite o numero de dependentes: \n");
scanf("%f", &ndep);

printf("Digite a quantidade de horas extras trabalhadas: \n");
scanf("%f", &nhet);

vh = 1.0 / 5 * sal_min;
smes = nht * vh;
vdep = 32 * ndep;
vhe = nhet * (vh + (vh * 50 / 100.0));
sbruto = smes + vdep + vhe;

if(sbruto < 200) {
    imp = 0;
}
else if(sbruto >= 200 && sbruto <= 500) {
    imp = sbruto * 10 / 100.0;
}
else if (sbruto > 500) {
    imp = sbruto * 20 / 100.0;
}

sliq = sbruto - imp;

if(sliq <= 350){
    grat = 100;
}
else if(sliq > 350){
    grat = 50;
}
 sal_receber = sliq + grat;

 printf("O salario a receber eh: %.2f\n", sal_receber);

return 0;
}
