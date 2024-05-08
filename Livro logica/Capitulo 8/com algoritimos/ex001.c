#include <stdio.h>

int main(){

    int num, x;

    x = verifica(num);

    if(x == 1){
        printf("#Numero positivo#\n");
    }
    if(x == 0){
        printf("#Numero Negativo#\n");
    }

    return 0;
}

int verifica(int num) {


    printf("\nDigite um numero: \n");
    scanf("%d%*c", &num);

    if(num >= 0){
        return 1;
    }
    else{
        return 0;
    }

}
