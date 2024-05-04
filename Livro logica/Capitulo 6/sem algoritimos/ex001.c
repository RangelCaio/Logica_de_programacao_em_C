#include <stdio.h>

int main(){

    int vetor[6], vetor_pares[6], vetor_impares[6], qnt_pares = 0, qnt_impares = 0, i;

    printf("#Vetor#\n");
    for(i = 0; i < 6; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 6; i++){
        if(vetor[i] % 2 == 0){
            vetor_pares[qnt_pares] = vetor[i];
            qnt_pares++;
        }

        else{
            vetor_impares[qnt_impares] = vetor[i];
            qnt_impares++;
        }
    }

    printf("\n\n#vetor_pares");
    for(i = 0; i < qnt_pares; i++){
        printf("[%d]", vetor_pares[i]);
    }
        printf("\nQuantidade numeros pares: %d \n", qnt_pares);

    printf("\n#vetor_impares");
    for(i = 0; i < qnt_impares; i++){
        printf("[%d]", vetor_impares[i]);
    }
        printf("\nQuantidade numeros impares: %d \n", qnt_impares);

return 0;
}
