#include <stdio.h>

int main()
{
float peso_saco, racao_gato1, racao_gato2, total_final;

printf("O valor do peso do saco de racao em kilos eh:\n");
scanf("%f", &peso_saco);

printf("A quantidade de racao fornecida em gramas para o gato 1 por dia eh:\n");
scanf("%f", &racao_gato1);

printf("A quantidade de racao fornecida em gramas para o gato 2 por dia eh:\n");
scanf("%f", &racao_gato2);

racao_gato1 = racao_gato1 / 1000;
racao_gato2 = racao_gato2 / 1000;
total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);

printf("O total de racao fornecida para os gatos eh: %f\n", total_final);

return 0;
}
