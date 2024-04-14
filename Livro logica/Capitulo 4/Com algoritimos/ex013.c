#include <stdio.h>

int main() {
float op, sal, imp, aum, novo_sal;
printf("Menu de opcoes.\n");
printf("1 - imposto\n");
printf("2 - Novo salario\n");
printf("3 - Classificacao\n");
printf("Digite a opcao desejada: \n");
scanf("%f", &op);

if( op == 1) {

    printf("Digite o salario: \n");
    scanf("%f", &sal);
    if(sal < 500){
        imp = sal * 5 / 100;
}

    else if( sal >= 500 && sal < 850){
        imp = sal * 10 / 100;
}

    else if(sal > 850){
        imp = sal * 15 / 100;
}

    printf("Imposto eh: %.2f\n", imp);
}

else if(op == 2) {
    printf("Digite o salario: \n");
    scanf("%f", &sal);
    if(sal > 1500){
        aum = 25;
}

    else if(sal >= 750 && sal <= 1500){
        aum = 50;
}

    else if(sal >= 450 && sal < 750){
        aum = 75;
}

    else if(sal < 450){
        aum = 100;
}

    novo_sal = sal + aum;
    printf("O valor do novo salario eh: %.2f\n", novo_sal);
}

else if(op == 3) {
    printf("Digite o salario: \n");
    scanf("%f", &sal);
    if(sal <= 700){
        printf("Mal remunerado!\n");
}

    else if(sal > 700){
        printf("Bem remunerado!\n");
}
}

else{
    printf("Opcao invalida\n");
}
return 0;
}






