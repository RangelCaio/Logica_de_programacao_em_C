#include <stdio.h>

int main() {

int camisap, camisam, camisag, valor_final;

printf("Digite a quantidade de camisas P, M e G respectivamente: \n");
scanf("%d %d %d", &camisap, &camisam, &camisag);

valor_final = camisap * 10 + camisam * 12 + camisag * 15;

printf("O valor final das comprar foi: %d \n", valor_final);

return 0;
}
