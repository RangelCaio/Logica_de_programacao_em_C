#include <stdio.h>

int main() {

int vet1[5], vet2[5], vet3[5], x, y;

x = 0;
y = 4;

printf("Digite os cinco primeiros vetores\n");
while(x <= y) {
    scanf("%d", &vet1[x]);
    x = x + 1;
}

x = 0;
printf("Digite os cinco segundos vetores\n");
while(x <= y) {
    scanf("%d", &vet2[x]);
    x = x + 1;
}

x = 0;
while(x <= y) {
    vet3[x] = vet1[x] + vet2[x];
    x = x + 1;
}

x = 0;
printf("O Resultado da soma dos vetores eh:\n");
while(x <= y) {
    printf("%d \n", vet3[x]);
    x = x + 1;
}

return 0;
}
