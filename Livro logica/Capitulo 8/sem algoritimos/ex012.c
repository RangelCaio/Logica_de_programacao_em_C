#include <stdio.h>
#include <math.h>

int funcao(int num1, int num2){

    double pot = pow(num1, num2);

    return pot;
}

int main(){

    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    double pot = funcao(num1, num2);

    printf("\n# O primeiro numero elevado ao segundo eh: %.2f #\n", pot);

    return 0;
}
