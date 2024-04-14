#include <stdio.h>

int main() {

float salario, aumento, sal_final;

printf("Digite o valor do salario: \n");
scanf("%f", &salario);

if(salario <= 300){
    sal_final = salario * 1.35;
    printf("O salario final eh: %.2f\n", sal_final);
}
else if(salario > 300) {
    sal_final = salario * 1.15;
    printf("O salario final eh: %.2f\n", sal_final);
}

return 0;
}
