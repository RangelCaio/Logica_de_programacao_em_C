#include <stdio.h>
#include <math.h>

int main(){

float raio, circ, area, volume;

printf("--- Calculo esfera --- \n");
printf("Digite o valor do raio da esfera em centimetros: \n");
scanf("%f", &raio);

circ = 2 * 3,14 * raio;
area = 3,14 * pow(raio, 2);
volume = 0.75 * 3,14 * pow(raio, 3);


printf("O valor da circunferencia da esfera eh de %.2f centimetros\n", circ);
printf("O valor da area da esfera eh %.2f centimetros quadrados\n", area);
printf("O valor do volume da esfera eh %.2f mls\n", volume);



return 0;
}
