#include <stdio.h>

int main() {

float x, y, z;

printf("Digite o comprimento dos tres lados do triangulo: \n");
scanf("%f %f %f", &x, &y, &z);

if(x < y + z && y < x + z && z < x + y){
    if(x == y && y == z){
        printf("Triangulo equilatero. \n");
    }
    else if(x == y || x == z || y == z){
        printf("Triangulo isoceles.\n");
    }
    else if(x != y && x != z && y != z){
        printf("Triangulo escaleno\n");
    }
}
    else{
        printf("Essas medidas nao formam um triangulo.\n");
    }

return 0;
}
