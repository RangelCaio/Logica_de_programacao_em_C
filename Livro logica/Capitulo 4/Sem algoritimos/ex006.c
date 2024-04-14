#include <stdio.h>

int main() {

float n1, n2, opcao, potencia, raiz_quad1, raiz_quad2, raiz_cub1, raiz_cub2;

printf("Digite o primeiro numero: \n");
scanf("%f", &n1);

printf("Digite o segundo numero: \n");
scanf("%f", &n2);

printf("Digite a opcao desejada: \n");
printf("1 - primeiro numero elevado ao segundo\n");
printf("2 - Raiz quadrada de cada numero\n");
printf("3 - Raiz cubica de cada numero\n");
scanf("%f", &opcao);


raiz_quad1 = sqrt(n1);
raiz_quad2 = sqrt(n2);
raiz_cub1 = cbrt(n1);
raiz_cub2 = cbrt(n2);


if(opcao == 1) {
    potencia = pow(n1, n2);
    printf("O primeiro numero elevado ao segundo eh: %.2f\n", potencia);
}
else if(opcao == 2) {

    printf("A raiz quadrada do primeiro numero eh: %.2f\n", raiz_quad1);
    printf("A raiz quadrada do segundo numero eh: %.2f\n", raiz_quad2);
}
else if(opcao == 3) {
    printf("A raiz cubica do primeiro numero eh: %.2f\n", n1);
    printf("A raiz cubica do segundo numero eh: %.2f\n", n2);
}
else {
    printf("Opcao invalida!\n");
}

return 0;
}
