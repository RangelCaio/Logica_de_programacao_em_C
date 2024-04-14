#include <stdio.h>

int main() {

int cod_prod, cod_pais;
float peso_quilos, peso_gramas, pre_total, imposto, valor_total, pre_grama;

printf("Digite o codigo do produto: \n");
scanf("%d", &cod_prod);

printf("Digite o peso do produto em quilos: \n");
scanf("%f", &peso_quilos);

printf("Digite o codigo do pais de origem: \n");
scanf("%d", &cod_pais);

peso_gramas = peso_quilos * 1000;

printf("O peso do produto em gramas eh: %.2f\n", peso_gramas);

if(cod_prod >= 1 && cod_prod <= 4){
    pre_grama = 10;
}
else if(cod_prod >= 5 && cod_prod <= 7){
    pre_grama = 25;
}
else if (cod_prod >= 8 && cod_prod <= 10){
    pre_grama = 35;
}

pre_total = peso_gramas * pre_grama;
printf("O preco total eh: %.2f\n", pre_total);

if(cod_pais == 1) {
    imposto = 0;
}
else if(cod_pais == 2) {
    imposto = pre_total * 15.0 / 100.0;
}
else if(cod_pais == 3) {
    imposto = pre_total * 25.0 / 100.0;
}

printf("O valor do imposto eh: %.2f\n", imposto);

valor_total = pre_total + imposto;

printf("O valor total eh: %.2f\n", valor_total);


return 0;
}
