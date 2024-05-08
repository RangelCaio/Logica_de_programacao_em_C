#include <stdio.h>

/*Corrigir*/

int main(){

    int num1, num2, s;

    printf("Digite num1: ");
    scanf("%d", &num1);

    printf("Digite num2: ");
    scanf("%d", &num2);

    s = somar(num1, num2);

    printf("A soma de i de %d a %d eh: %d\n", num1 + 1, num2 - 1, s);

    return 0;
}

int somar(num1, num2){

    int i, s = 0;

    for (int i = num1 + 1; i < num2; i++){
        s = s + i;
    }

    return s;
}
