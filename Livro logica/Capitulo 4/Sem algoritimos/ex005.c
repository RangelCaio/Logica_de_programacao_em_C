#include <stdio.h>

int main() {

float n1, n2, num, conta;

printf("Digite o primeiro numero: \n");
scanf("%f", &n1);

printf("Digite o segundo numero: \n");
scanf("%f", &n2);

printf("Digite um numero de 1 a 5: \n");
printf("1 - Media entre os numeros digitados\n");
printf("2 - Diferenca do maior pelo menor\n");
printf("3 - Produto entre os numeros digitados\n");
printf("4 - Divisao do primeiro pelo segundo\n");
scanf("%f", &num);

if(num == 1) {
    conta = (n1 + n2) / 2;
    printf("A media dos numeros eh: %.2f\n", conta);
}
if(num == 2) {
    conta = n1 - n2;
    printf("A subtracao dos numeros eh: %.2f\n", conta);
}
if(num == 3) {
    conta = n1 * n2;
    printf("O produto dos numeros eh: %.2f\n", conta);
}
if(num == 4) {
    if(n2 == 0) {
        printf("O numero precisa ser diferente de 0\n");
    }
    else {
    conta = n1 / n2;
    printf("A divisao dos numero eh: %.2f\n", conta);
    }
}



return 0;
}
