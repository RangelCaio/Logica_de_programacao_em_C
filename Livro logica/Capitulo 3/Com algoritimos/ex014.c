#include <stdio.h>

int main()
{

int ano_atual, ano_nascimento, idade_atual, idade_2050;

printf("O ano atual eh:\n", ano_atual);
scanf("%d", &ano_atual);

printf("O ano de nascimento eh:\n", ano_nascimento);
scanf("%d", &ano_nascimento);

idade_atual = ano_atual - ano_nascimento;
idade_2050 = 2050 - ano_nascimento;

printf("A idade atual eh: %d\n", idade_atual);
printf("A idade em 2050 eh: %d\n", idade_2050);

return 0;
}
