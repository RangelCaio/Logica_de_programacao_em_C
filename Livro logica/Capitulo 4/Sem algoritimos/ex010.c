#include <stdio.h>

int main() {

float pre_fabrica, pre_consumidor, imposto;

printf("Digite o valor do carro: \n");
scanf("%f", &pre_fabrica);

if(pre_fabrica <= 12000.00) {
    pre_consumidor = pre_fabrica * 1.05;
}
else if(pre_fabrica > 12000.00 && pre_fabrica <= 25000.00) {
    imposto = pre_fabrica * 0.15;
    pre_consumidor = (pre_fabrica * 1.10) + imposto;
}
else if(pre_fabrica > 25000.00) {
    imposto = pre_fabrica * 0.2;
    pre_consumidor = (pre_fabrica * 1.15) + imposto;
}
printf("O valor do veiculo para o consumidor final eh: %.2f\n", pre_consumidor);

return 0;
}
