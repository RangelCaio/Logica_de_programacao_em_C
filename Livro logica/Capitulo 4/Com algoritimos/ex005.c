#include <stdio.h>

int main(){

float num1, num2, num3, num4;

printf("Digite tres numeros em ordem crescente: \n");
scanf("%f", &num1);
scanf("%f", &num2);
scanf("%f", &num3);

printf("Digite um numero (fora de ordem): \n");
scanf("%f", &num4);

if(num4 > num3){
    printf("A ordem decrescente eh: %f - %f - %f - %f\n", num4, num3, num2, num1);
}
else if(num4 > num2 && num4 < num3){
    printf("A ordem decrescente eh: %f - %f - %f - %f\n", num3, num4, num2, num1);
}
else if(num4 > num1 && num4 < num2){
    printf("A ordem decrescente eh: %f - %f - %f - %f\n", num3, num2, num4, num1);
}
else if(num4 < num1){
    printf("A ordem decrescente eh: %f - %f - %f - %f\n", num3, num2, num1, num4);
}

return 0;
}

