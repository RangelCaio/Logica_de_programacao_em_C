#include <stdio.h>
#include <time.h>

int main() {

time_t rawtime;
struct tm *info;
int dia, mes, ano, hora, minuto;

time(&rawtime);
info = localtime(&rawtime);

dia = info->tm_mday;
mes = info->tm_mon + 1;
ano = info->tm_year + 1900;

printf("Data atual: %d/%d/%d - \n", dia, mes, ano);

switch(mes) {

    case 1:
        printf("janeiro");
        break;

    case 2:
        printf("fevereiro");
        break;

    case 3:
        printf("marco");
        break;

    case 4:
        printf("abril");
        break;

    case 5:
        printf("maio");
        break;

    case 6:
        printf("junho");
        break;

    case 7:
        printf("julho");
        break;

    case 8:
        printf("agosto");
        break;

    case 9:
        printf("setembro");
        break;

    case 10:
        printf("outubro");
        break;

     case 11:
        printf("novembro");
        break;

    case 12:
        printf("dezembro");
        break;

    default:
        printf("mes invalido");
        break;
}

hora = info->tm_hour;
minuto = info->tm_min;

printf("Hora atual: %d:%d\n", hora, minuto);

return 0;
}
