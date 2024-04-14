#include <stdio.h>

int main() {

float salario, novo_sal;

printf("Digite o valor do salario: \n");
scanf("%f", &salario);


if(salario <= 300) {
    novo_sal = salario *  1.15;
    printf("O percentual de aumento foi de 15 por cento\n");
}
else if(salario > 300 && salario < 600) {
    novo_sal = salario *  1.10;
    printf("O percentual de aumento foi de 10 por cento\n");

}
else if(salario >= 600 && salario <= 900) {
    novo_sal = salario *  1.05;
    printf("O percentual de aumento foi de 5 por cento\n");
}
else if(salario > 900) {
    novo_sal = salario *  1.00;
    printf("O percentual de aumento foi de 0 por cento\n");
}

   printf("O valor do novo salario eh: %.2f\n", novo_sal);

return 0;
}
