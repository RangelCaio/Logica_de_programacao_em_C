#include <stdio.h>

int main(){

float n1, n2, divisao;

printf("Digite o primeiro numero: \n");
scanf("%f", &n1);

printf("Digite o segundo numero: \n");
scanf("%f", &n2);

divisao = n1 / n2;

printf("O valor da divisao eh: %.2f\n", divisao);


return 0;
}
