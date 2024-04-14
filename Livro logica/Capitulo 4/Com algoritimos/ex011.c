#include <stdio.h>

int main() {

int hora_i, min_i, hora_f, min_f, hora_d, min_d;

printf("Digite o horario inicial: \n");

printf("hora: \n");
scanf("%d", &hora_i);

printf("minuto: \n");
scanf("%d", &min_i);

printf("Digite o horario final: \n");

printf("hora: \n");
scanf("%d", &hora_f);

printf("minuto: \n");
scanf("%d", &min_f);

if(min_i > min_f) {
    min_f = min_f - 60;
    hora_f = hora_f - 1;
}

else if(hora_i > hora_f) {
    hora_f = hora_f + 24;
}

min_d = min_f - min_i;
hora_d = hora_f - hora_i;

printf("O jogo durou: %d horas e %d minutos.\n", hora_d, min_d);

return 0;
}
