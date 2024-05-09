#include <stdio.h>

int funcao(int h, int m, int s){

    int total = (h * 3600) + (m * 60) + s;

    return total;
}

int main() {

    int h, m, s, total;

    printf("Digite as horas: \n");
    scanf("%d", &h);

    printf("Digite os minutos: \n");
    scanf("%d", &m);

    printf("Digite os segundos: \n");
    scanf("%d", &s);

    total = funcao(h, m, s);

printf("%dh, %dm, %ds correspondem a %d segundos.\n", h, m, s, total);


return 0;
}
