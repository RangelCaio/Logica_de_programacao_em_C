#include <stdio.h>

int main(){

int num, r;

printf("Digite um numero: \n");
scanf("%d", &num);

r = num % 2;

if(r == 0){
    printf("O numero eh par. \n");
}
else{
    printf("O numero eh impar.\n");
}
return 0;
}
