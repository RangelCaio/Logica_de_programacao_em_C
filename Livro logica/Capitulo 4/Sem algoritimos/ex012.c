#include <stdio.h>

int main() {

float salario_bruto, novo_sal;

printf("Digite o valor do salario bruto: \n");
scanf("%f", &salario_bruto);


if(salario_bruto <= 300) {
    novo_sal = (salario_bruto * 0.93) + 100;

}

else if(salario_bruto > 300 && salario_bruto < 600) {
    novo_sal = (salario_bruto * 0.93) + 75;

}

else if(salario_bruto >= 600 && salario_bruto <= 900) {
    novo_sal = (salario_bruto * 0.93) + 50;

}

if(salario_bruto > 900) {
    novo_sal = (salario_bruto * 0.93) + 35;

}

   printf("O novo salario eh: %.2f\n", novo_sal);
return 0;
}
