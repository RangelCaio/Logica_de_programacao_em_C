#include <stdio.h>

int main() {

float nota_trab, aval_sem, exame, media;

printf("Digite a nota do trabalho de laboratorio: \n");
scanf("%f", &nota_trab);

printf("Digite a nota da avaliacao semestral: \n");
scanf("%f", &aval_sem);

printf("Digite a nota do exame final: \n");
scanf("%f", &exame);

media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;
printf("Media ponderada: %f\n", media);

if(media >= 8 && media <= 10) {
    printf("Obteve conceito A\n");
}
else if( media >= 7 && media < 8) {
    printf("Obteve conceito B\n");
}
else if(media >= 6 && media < 7) {
    printf("Obteve conceito C\n");
}
else if(media >= 5 && media < 6) {
    printf("Obteve conceito D\n");
}
else if(media >= 0 && media <5) {
    printf("Obteve conceito E\n");
}


return 0;
}
