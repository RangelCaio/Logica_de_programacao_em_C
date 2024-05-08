#include <stdio.h>

int main() {

    int atual, antigo, acrescimo;

    printf("Digite o preco antigo: \n");
    scanf("%d", &antigo);

    printf("Digite o preco atual: \n");
    scanf("%d", &atual);

    acrescimo = calculo(antigo, atual);

    printf("O aumento foi de: %d por cento\n", acrescimo);

return 0;
}

int calculo(int pa, int pn) {

    float resultado;

    resultado = ((pn - pa) / pa) * 100;

    return resultado;
}
