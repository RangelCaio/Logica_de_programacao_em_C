#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {

float area, raio;

printf("Digite o comprimento do raio do circulo: \n");
scanf("%f", &raio);

area = PI * pow(raio, 2);

printf("A area do circulo eh: %f\n", area);


return 0;
}
