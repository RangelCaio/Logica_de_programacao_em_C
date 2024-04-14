#include <stdio.h>
#include <math.h>

int main(){

float num1, num2, soma, raiz;
int op;

printf("Menu\n");
printf("1 - Somar dois numeros\n");
printf("2- Raiz quadrada do numero\n");
printf("Digite sua opcao: \n");
scanf("%d", &op);

if(op == 1){
    printf("Digite um valor para o primeiro numero\n");
    scanf("%f", &num1);

    printf("Digite um valor para o segundo numero\n");
    scanf("%f", &num2);

    soma = num1 + num2;
    printf("A soma de %.2f e %.2f eh %.2f\n", num1, num2, soma);
}

else if(op == 2){
    printf("Digite um valor: \n");
    scanf("%f", &num1);
    raiz = sqrt(num1);
    printf("A raiz quadrada de %.2f eh %.2f", num1, raiz);
}

else {
printf("Opcao invalida!\n");
}

return 0;
}



