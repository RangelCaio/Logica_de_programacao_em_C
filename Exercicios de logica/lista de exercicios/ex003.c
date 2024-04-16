#include <stdio.h>

int main() {

int qnt_fran, qnt_broa;
float valor, poupanca;

printf("Digite o numero paes fraceses e broas vendidas: \n");
scanf("%d %d", &qnt_fran, &qnt_broa);

poupanca = (qnt_fran * 0.12 + qnt_broa * 1.5) * 0.1;
valor = (qnt_fran * 0.12 + qnt_broa * 1.5) * 0.9;

printf("O valor guardado na poupanca foi: %.2f\n", poupanca);
printf("O lucro total foi de %.2f\n", valor);

return 0;
}
