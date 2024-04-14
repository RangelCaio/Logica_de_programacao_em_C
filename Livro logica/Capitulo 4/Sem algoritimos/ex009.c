#include <stdio.h>

int main() {

float saldo_medio, saldo_final;

printf("Digite o valor do saldo medio: \n");
scanf("%f", &saldo_medio);

if(saldo_medio > 400){
    saldo_final = saldo_medio * 1.3;
    printf("O valor do saldo final eh: %.2f\n", saldo_final);
}
else if(saldo_medio <= 400 && saldo_medio > 300) {
    saldo_final = saldo_medio * 1.25;
    printf("O valor do saldo final eh: %.2f\n", saldo_final);
}
else if(saldo_medio <= 300 && saldo_medio > 200){
    saldo_final = saldo_medio * 1.2;
    printf("O valor do saldo final eh: %.2f\n", saldo_final);
}
else if(saldo_medio <= 200) {
    saldo_final = saldo_medio * 1.1;
    printf("O valor do saldo final eh: %.2f\n", saldo_final);
}

return 0;
}
