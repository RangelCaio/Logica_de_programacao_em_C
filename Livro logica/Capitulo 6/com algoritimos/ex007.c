#include <stdio.h>

int main() {

    int vetor[15], aux, x, y, i;


    for(i = 0; i < 15; i++){
        printf("Digite um numero para: vet[%d] \n", i);
        scanf("%d", &vetor[i]);
    }
    for(x = 0; x < 15; x++){
        for(y = x; y < 15; y++){
            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
    for(x = 0; x < 15; x++){
        printf("%d ", vetor[x]);
    }

 return 0;
 }
