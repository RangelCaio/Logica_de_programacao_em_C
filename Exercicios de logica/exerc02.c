#include <stdio.h>

int main() {

int num_cavalos, ferraduras;

printf("Digite o numero de cavalos: \n");
scanf("%d", &num_cavalos);

ferraduras = num_cavalos * 4;

printf("Para os %d cavalos, a quantidade de ferraduras eh %d\n", num_cavalos, ferraduras);

return 0;
}
