#include <stdio.h>

 int main(){

    int vet[10], i, pos_maior = 0, pos_menor = 0;
    int maior, menor;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for(i = 0; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i];
            pos_maior = i;
        }

        if(vet[i] < menor){
            menor = vet[i];
            pos_menor = i;
        }
        }

    printf("#Maior# \nPosicao: [%d] Valor: %d \n", pos_maior, maior);
    printf("#Menor# \nPosicao: [%d] Valor: %d \n", pos_menor, menor);

 return 0;
 }
