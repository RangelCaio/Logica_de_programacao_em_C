#include <stdio.h>

int main(){

float celsius, far;

printf("--- Celsius para farenheith --- \n");
printf("Digite a temperatura em graus celsius: \n");
scanf("%f", &celsius);

far = (celsius * 9 / 5) + 32;


printf("O valor da temperatura em farenheith eh: %.2f\n", far);



return 0;
}
