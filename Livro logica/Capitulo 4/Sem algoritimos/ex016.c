#include <stdio.h>

int main() {

float preco, novo_preco;

printf("Digite o valor do preco atual do produto: \n");
scanf("%f", &preco);

if(preco <= 30) {
    novo_preco = preco;
}
else if(preco > 30 && preco <= 100) {
    novo_preco = preco * 0.9;
}
else if(preco > 100) {
    novo_preco = preco * 0.85;
}

printf("O novo preco do produto eh: %.2f\n", novo_preco);


return 0;
}
