#include <stdio.h>

int main() {

float h, peso_ideal;

int genero;

printf("Digite o genero da pessoa: \n");
printf("1 - Masculino\n");
printf("2 - Feminino\n");
scanf("%d", &genero);

if(genero == 1) {
    printf("Digite a altura da pessoa em metros: \n");
    scanf("%f", &h);
    peso_ideal = (72.2 * h) - 58;
    printf("Peso ideal: %.2f\n", peso_ideal);
}
else {
    printf("Digite a altura da pessoa em metros: \n");
    scanf("%f", &h);
    peso_ideal = (62.1 * h) - 44.7;
    printf("Peso ideal: %.2f\n", peso_ideal);
}
return 0;
}
