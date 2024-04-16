#include <stdio.h>

int main() {

float IMC, altura, peso;
int opcao;

printf("Escolha uma opcao para o calculo do IMC\n");
printf("1 - Adulto\n");
printf("2 - idoso\n");
scanf("%d", &opcao);

printf("Digite a altura em metros: \n");
scanf("%f", &altura);

printf("Digite o peso em quilos: \n");
scanf("%f", &peso);

IMC = peso / (altura * altura);

if(opcao == 1) {
    if(IMC < 18.5)
        printf("Baixo peso.\nRecomenda-se ingestao de alimentos caloricos.\n");
    if(IMC >= 18.5 && IMC < 25)
        printf("Peso normal.\nRecomenda-se ingestao equilibrada de alimentos para a manutencao do peso.\n");
    if(IMC >= 25 && IMC < 30)
        printf("Excesso de peso.\nRecomenda-se ingestao de alimentos de baixa caloria, rico em fibras e a pratica de exercicios.\n");
    if(IMC >= 30 && IMC < 35)
        printf("Obesidade classe 1.\nRecomenda-se ingestao de alimentos de baixa caloria, rico em fibras e a pratica de exercicios.\n");
    if(IMC >= 35 && IMC < 40)
        printf("Obesidade classe 2.\nRecomenda-se ingestao de alimentos de baixa caloria, rico em fibras e a pratica de exercicios.\n");
    if(IMC >= 40)
        printf("Obesidade classe 3.\nRecomenda-se ingestao de alimentos de baixa caloria, rico em fibras e a pratica de exercicios.\n");
}

if(opcao == 2) {
    if(IMC < 22)
        printf("Baixo peso.\nRecomenda-se ingestao de alimentos caloricos.\n");
    if(IMC >= 22 && IMC < 27)
        printf("Peso adequado.\nRecomenda-se ingestao equilibrada de alimentos para a manutencao do peso.\n");
    if(IMC >= 27 && IMC < 30)
        printf("Excesso de peso.\nRecomenda-se ingestao de alimentos de baixa caloria, rico em fibras e a pratica de exercicios.\n");
    if(IMC >= 30)
        printf("Obesidade.\nRecomenda-se ingestao de alimentos de baixa caloria, rico em fibras e a pratica de exercicios.\n");
}

return 0;
}
