#include <stdio.h>

int main() {

float pre, venda, novo_pre;

printf("Digite o preco atual do produto: \n");
scanf("%f", &pre);
printf("Digite a quantidade de venda do produto: \n");
scanf("%f", &venda);

if(venda < 500 || pre < 30){
    novo_pre = pre + 10.0 / 100.0 * pre;
}

else if((venda >= 500 && venda < 1200) || (pre >= 30 && pre < 80)){
    novo_pre = pre + 15.0/100.0 * pre;
}
else if(venda >= 1200 || pre >= 80) {
    novo_pre = pre - 20.0 / 100.0 * pre;
}

printf("O novo preco eh: %.2f\n", novo_pre);

return 0;
}
