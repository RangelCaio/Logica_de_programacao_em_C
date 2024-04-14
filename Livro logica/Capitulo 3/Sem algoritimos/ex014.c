#include <stdio.h>

int main(){

float ano_nascimento, ano_atual, idade_anos, idade_sem, idade_mes, idade_dia;

printf("Digite o ano de nascimento: \n");
scanf("%f", &ano_nascimento);

printf("Digite o ano atual: \n");
scanf("%f", &ano_atual);

idade_anos = ano_atual - ano_nascimento;
idade_mes = idade_anos * 12;
idade_sem = idade_mes * 4;
idade_dia = idade_anos * 365;

printf("A idade em anos eh: %.2f\n", idade_anos);
printf("A idade em meses eh: %.2f\n", idade_mes);
printf("A idade em sem eh: %.2f\n", idade_sem);
printf("A idade em dias eh: %.2f\n", idade_dia);


return 0;
}
