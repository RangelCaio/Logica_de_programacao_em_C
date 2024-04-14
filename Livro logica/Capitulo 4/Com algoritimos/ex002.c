#include <stdio.h>

int main()
{

float nota1, nota2, nota3, media, nota_exame;

printf("Digite a primeira nota\n");
scanf("%f", &nota1);

printf("Digite a segunda nota\n");
scanf("%f", &nota2);

printf("Digite a terceira nota\n");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

printf("Media aritimetica: %f\n", media);

if(media >= 0 && media < 3){
    printf("Reprovado");
}
else if(media >= 3 && media < 7){
    printf("Exame\n");
    nota_exame = 12 - media;
    printf("Deve tirar nota para ser aprovado: %f\n", nota_exame);
}
else if(media >= 7 && media <= 10) {
    printf("Aprovado!\n");
}


    return 0;
}



