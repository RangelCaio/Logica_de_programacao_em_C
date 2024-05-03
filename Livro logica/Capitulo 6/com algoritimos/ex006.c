#include <stdio.h>

int main() {

    int vet[10], i, j, aux;

    printf("#Vetor#\n");
    for(i = 0; i < 10; i++){
        printf("Digite um numero para vetor1[%d]: \n", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 9 - i; j++){
            if(vet[j] < vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    printf("#Vetor em ordem decrescente#\n");
    for(i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

return 0;
}
