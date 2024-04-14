#include <stdio.h>

int main() {

float salario, aumento, sal_final;

printf("Digite o valor do salario: \n");
scanf("%f", &salario);

aumento = 500;
sal_final = salario * 1.3;

if(salario > 500) {
    printf("Sem direito a aumento!\n");
}
else {
    printf("O valor do salario com aumento eh: %.2f\n", sal_final);
}

return 0;
}
