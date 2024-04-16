#include <stdio.h>

int main() {

int mes, dia, dias_passados;

printf("Digite o mes em numero: ");
scanf("%d", &mes);

printf("Digite o dia em numero: ");
scanf("%d", &dia);

dias_passados = (mes * 30) + dia;

printf("O numero de dias eh: %d\n", dias_passados);

return 0;
}
