#include <stdio.h>

int main() {

    int vet[8], i, j, k, aux;

    for(i = 0; i < 8; i++){
        printf("Digite um numero para o vetor: ");
        scanf("%d", &aux);

        for(j = 0; j < i && vet[j] < aux; j++);

        for(k = i; k > j; k--){
            vet[k] = vet[k - 1];
        }
        vet[j] = aux;
    }

    printf("Os valores ordenados sao: \n");
    for(i = 0; i < 8; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

return 0;
}
