#include <stdio.h>

int main(){

float lado, area;

printf("--- Area do quadrado ---\n");

printf("Digite o valor do lado do quadrado: \n");
scanf("%f", &lado);

area = lado * lado;

printf("O valor da area do quadrado eh: %.2f\n", area);

return 0;
}
