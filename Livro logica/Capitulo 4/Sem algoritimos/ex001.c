#include <stdio.h>

int main() {

float n1, n2, n3, n4, media;

printf("Digite a primeira nota: \n");
scanf("%f", &n1);

printf("Digite a segunda nota: \n");
scanf("%f", &n2);

printf("Digite a terceira nota: \n");
scanf("%f", &n3);

printf("Digite a quarta nota: \n");
scanf("%f", &n4);

media = (n1 + n2 + n3 + n4) / 4;


if(media >= 7) {
    printf("Aprovado!\n");
}
else {
    printf("Reprovado!\n");
}

return 0;
}
