#include <stdio.h>

int main()
{
float a_degrau, a_usuario, qtd_degraus;

printf("A altura de um degrau em metros eh:\n");
scanf("%f", &a_degrau);

printf("A altura que deseja alcancar em metros eh:\n");
scanf("%f", &a_usuario);

qtd_degraus = a_usuario / a_degrau;

printf("A quantidade necess�ria de degraus que dever� subir �: %f\n", qtd_degraus);

return 0;
}
