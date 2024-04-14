#include <stdio.h>

int main()
{

float pes, polegadas, jardas, milhas;

printf("Digite o valor em pes:\n");
scanf("%f", &pes);

polegadas = pes * 12;
jardas = pes / 3;
milhas = jardas / 1760;

printf("O valor de pes em polegadas eh: %f\n", polegadas);
printf("O valor de pes em jardas eh: %f\n", jardas);
printf("O valor de pes em milhas eh: %f\n", milhas);

return 0;
}
