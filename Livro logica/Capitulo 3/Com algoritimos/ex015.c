#include <stdio.h>

float main()
{

float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;

printf("O preco de fabrica eh:\n");
scanf("%f", &p_fab);

printf("O preco de lucro eh:\n");
scanf("%f", &perc_d);

printf("O preco de imposto em porcentagem eh:\n");
scanf("%f", &perc_i);

vlr_d = p_fab * perc_d / 100;
vlr_i = p_fab * perc_i / 100;
p_final = p_fab + vlr_d + vlr_i;

printf("O valor do lucro do distribuidor eh: %f\n", vlr_d);
printf("O valor dos impostos eh: %f\n", vlr_i);
printf("O valor do preco final eh: %f\n", p_final);

return 0;
}
