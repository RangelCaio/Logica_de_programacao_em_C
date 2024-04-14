#include <stdio.h>

int main() {

float tipo, investimento, poupanca, rendfi;
int meses;

printf("Escolha o tipo de investimento\n");
printf("1 - Poupanca\n");
printf("2 - Renda fixa\n");
scanf("%f", &tipo);

if(tipo == 1) {
    printf("Digite o valor do investimento: \n");
    scanf("%f", &investimento);
    printf("Digite quantos meses sera o investimento: \n");
    scanf("%d", &meses);
    poupanca = investimento * 1.03;
    investimento = (poupanca) * meses;
}

else if(tipo == 2) {
    printf("Digite o valor do investimento: \n");
    scanf("%f", &investimento);
    printf("Digite quantos meses sera o investimento: \n");
    scanf("%d", &meses);
    rendfi = investimento * 1.04;
    investimento = (rendfi) * meses;
}

else{
    printf("Opcao invalida\n");
    return 0;
}

printf("O resultado do investimento foi %.2f apos %d mes(es). \n", investimento, meses);

return 0;
}
