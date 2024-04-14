#include <stdio.h>

int main() {

int cod_est, cod_carga;
float peso_toneladas, peso_quilos, pre_carga, imposto, valor_total;

printf("Digite o codigo do estado: \n");
scanf("%d", &cod_est);

printf("Digite o peso em toneladas: \n");
scanf("%f", &peso_toneladas);

printf("Digite o codigo da carga: \n");
scanf("%d", &cod_carga);

peso_quilos = peso_toneladas * 1000;

printf("O peso da carga em quilos eh: %.2f\n", peso_quilos);

if(cod_carga >= 10 && cod_carga <= 20){
    pre_carga = 100 * peso_quilos;
}
else if(cod_carga >= 21 && cod_carga <= 30){
    pre_carga = 250 * peso_quilos;
}
else if(cod_carga >= 31 && cod_carga <= 40){
    pre_carga = 340 * peso_quilos;
}

printf("O preco da carga eh: %.2f\n", pre_carga);

if(cod_est == 1){
    imposto = 35.0 / 100.0 * pre_carga;
}

if(cod_est == 2){
    imposto = 25.0 / 100.0 * pre_carga;
}

if(cod_est == 3){
    imposto = 15.0 / 100.0 * pre_carga;
}

if(cod_est == 4){
    imposto = 5.0 / 100.0 * pre_carga;
}

if(cod_est == 5){
    imposto = pre_carga;
}

printf("O valor do imposto eh: %.2f\n", imposto);

valor_total = pre_carga + imposto;
printf("O valor total eh: %.2f\n", valor_total);

return 0;
}
