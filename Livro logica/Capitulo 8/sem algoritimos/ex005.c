#include <stdio.h>

int funcao(int num1){

    int divisor;

    if(num1 >= 0){
        divisor = 1;
    }

    if(num1 < 0){
        divisor = 0;
    }

    return divisor;
}

int main(){

    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    int divisor = funcao(num1);

    if(divisor == 1){
        printf("\n#O numero eh positivo#\n");
    }
    if(divisor == 0){
        printf("#O numero eh negativo#\n");
    }

    return 0;
}
