#include <stdio.h>

int main() {

float sal_base, tempo, grat, sal_liq, imposto;

printf("Digite o valor do salario:\n");
scanf("%f", &sal_base);

printf("Digite o numero de horas trabalhadas:\n");
scanf("%f", &tempo);

if(sal_base < 200){
    imposto = 0;
    }
else if(sal_base <= 450 && sal_base >= 200) {
    imposto = 3.0 / 100.0 * sal_base;
}
else if(sal_base <= 700.0) {
    imposto = 8.0 / 100.0 * sal_base;
}
else if (sal_base > 700.0) {
    imposto = 12.0 / 100.0 * sal_base;
}

printf("Digite o valor do imposto eh: %.2f\n", imposto);

if(tempo <= 3) {
        grat = 30;
}
    else if(sal_base > 30) {
        grat = 30;
}
else if(tempo <= 3) {
    grat = 23;
   }
    if(tempo <= 6 && tempo > 3) {
    grat = 35;
    }
    else if(tempo > 6) {
    grat = 33;
    }

printf("A gratificacao foi de: %.2f\n", grat);

sal_liq = sal_base - imposto + grat;

printf("O valor do salario liquido foi de: %.2f\n", sal_liq);

if(sal_liq <= 350){
    printf("Classificacao A\n");
}
if(sal_liq < 600 && sal_liq > 350){
    printf("Classificacao B\n");
}
else if(sal_liq >= 600){
    printf("Classificacao C\n");
}


return 0;
}
