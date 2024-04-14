#include <stdio.h>

int main() {

float salario, aumento, novo_sal, cargo;

printf("Digite o cargo do funcionario: (1, 2, 3, 4 ou 5)\n");
scanf("%f", &cargo);

printf("Digite o valor do salario: \n");
scanf("%f", &salario);

if (cargo == 1) {
    printf("O cargo eh escrituario.\n");
    aumento = salario * 50 / 100;
    printf("O valor do aumento eh: %f", aumento);
    novo_sal = salario + aumento;
    printf("O novo salario: %f\n", novo_sal);
}

else if (cargo == 2) {
    printf("O cargo eh secretario.\n");
    aumento = salario * 35 / 100;
    printf("O valor do aumento eh: %f\n", aumento);
    novo_sal = salario + aumento;
    printf("O valor do novo salario eh: %f\n", novo_sal);
}

else if (cargo == 3){
    printf("O cargo eh caixa.\n");
    aumento = salario * 20 / 100;
    printf("O valor do aumento eh: %f\n", aumento);
    novo_sal = salario + aumento;
    printf("O valor do novo salario eh: %f\n", novo_sal);
}
else if (cargo == 4){
    printf("O cargo eh gerente.\n");
    aumento = salario * 10 / 100;
    printf("O valor do aumento eh: %f\n", aumento);
    novo_sal = salario + aumento;
    printf("O valor do novo salario eh: %f\n", novo_sal);
}
else if (cargo == 5){
    printf("O cargo eh diretor.\n");
    aumento = salario * 0 / 100;
    printf("O valor do aumento eh: %f\n", aumento);
    novo_sal = salario + aumento;
    printf("O valor do novo salario eh: %f\n", novo_sal);
}
else {
printf("cargo inexistente!");
}

return 0;
}
