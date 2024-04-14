#include <stdio.h>

int main(){

float produto, desconto, valor_final;

printf("Digite o valor do produto: \n");
scanf("%f", &produto);

desconto = produto * 0.1;
valor_final = produto - desconto;

printf("O valor do produto com desconto eh: %.2f\n", valor_final);

return 0;
}
