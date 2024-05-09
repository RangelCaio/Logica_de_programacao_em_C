#include <stdio.h>

int main() {

    int h, m, s, total;

    printf("Digite as horas: \n");
    scanf("%d", &h);

    printf("Digite os minutos: \n");
    scanf("%d", &m);

    printf("Digite os segundo: \n");
    scanf("%d", &s);

    total = funcao(h, m, s);

printf("%dh, %dm, %ds correspondem a %d segundos.\n", h, m, s, total);


return 0;
}

int funcao(int horas, int minutos, int segundos){

    int total_seg = (horas * 3600) + (minutos * 60) + segundos;

    return total_seg;
}
