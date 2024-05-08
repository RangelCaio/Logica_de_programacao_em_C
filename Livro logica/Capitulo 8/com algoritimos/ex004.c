#include <stdio.h>

int main() {

    int seg;
    printf("Digite segundos para transformar\n");
    scanf("%d", &seg);
    transformacao(seg);

return 0;
}

int transformacao(segundos) {

    int h, m, s, r;

    h = segundos / 3600;
    m = segundos / 60;
    s = segundos;

    printf("Horas: %d\n", h);
    printf("Minutos: %d\n", m);
    printf("Segundos: %d\n", s);

}
