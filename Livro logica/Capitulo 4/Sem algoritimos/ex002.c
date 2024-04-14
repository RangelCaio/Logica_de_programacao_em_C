#include <stdio.h>

int main() {

float n1, n2, media;

printf("Digite a primeira nota: \n");
scanf("%f", &n1);

printf("Digite a segunda nota: \n");
scanf("%f", &n2);


media = (n1 + n2) / 2;

if(media <= 3) {
    printf("Reprovado!\n");
}
else if(media > 3 && media <= 7) {
    printf("Exame!\n");
}
else if(media > 7 && media <= 10) {
    printf("Aprovado!\n");
}
else {
    printf("Valor invalido!\n");0
}


return 0;
}
