#include <stdio.h>
#include <math.h>


float funcao(float r){

    float vol = (4.0/3.0) * M_PI * pow(r, 3);

    return vol;
}

int main(){

    float r, vol;

    printf("Digite o raio da esfera em cm: \n");
    scanf("%f", &r);

    vol = funcao(r);

    printf("O volume da esfera eh: %.2f cm cubicos\n", vol);

    return 0;
}

