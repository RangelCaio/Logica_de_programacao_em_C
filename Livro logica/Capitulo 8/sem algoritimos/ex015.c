#include <stdio.h>

int separar(int vetor[]){

    int pares = 0;

    for(int i = 0; i < 15; i++){
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}


int main() {

    int vetor[15], qnt_pares, i;

    for(i = 0; i < 15; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    qnt_pares = separar(vetor);

    printf("# Quantidade de numeros pares do vetor: [%d] #\n", qnt_pares);

return 0;
}
