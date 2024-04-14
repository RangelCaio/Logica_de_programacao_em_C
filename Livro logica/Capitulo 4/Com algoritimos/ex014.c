#include <stdio.h>

int main () {

float sal, novo_sal, boni, aux;

printf("Digite o valor do salario: \n");
scanf("%f", &sal);

if(sal <= 500){
    boni = sal * 5 / 100.0;
}
else if( sal <= 1200) {
    boni = sal * 12 / 100.0;
}
else {
    boni = 0;
}

if(sal <= 600){
    aux = 150;
}
else{
    aux = 100;
}

novo_sal = sal + boni + aux;

printf("O novo salario eh: %.2f\n", novo_sal);

return 0;
}
