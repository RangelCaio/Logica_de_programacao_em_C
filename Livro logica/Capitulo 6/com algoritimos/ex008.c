#include <stdio.h>

int main() {

    int vetor1[10], vetor2[10], vetor3[20], i = 0, x = 0, y = 0, aux;

    printf("#Vetor1#\n");
    for(i = 0; i < 10; i++){
        printf("Digite um numero para vet[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

        printf("#Vetor2#\n");
    for(i = 0; i < 10; i++){
        printf("Digite um numero para vet[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 10; i++){
        vetor3[x++] = vetor1[i];
        vetor3[x++] = vetor2[i];
    }


    for(x = 0; x < 10; x++){
        for(y = 0; y < 10; y++){
            if(vetor1[x] < vetor1[y]){
                aux = vetor1[x];
                vetor1[x] = vetor1[y];
                vetor1[y] = aux;
            }
        }
    }
    for(x = 0; x < 10; x++){
        for(y = 0; y < 10; y++){
            if(vetor2[x] < vetor2[y]){
                aux = vetor2[x];
                vetor2[x] = vetor2[y];
                vetor2[y] = aux;
            }
        }
    }

    for(x = 0; x < 20; x++){
        for(y = 0; y < 20; y++){
            if(vetor3[x] < vetor3[y]){
                aux = vetor3[x];
                vetor3[x] = vetor3[y];
                vetor3[y] = aux;
            }
        }
    }



    printf("#Vetor1#\n");
    for(i = 0; i < 10; i++){
        printf("[%d] ", vetor1[i]);
    }
    printf("\n\n");
    printf("#Vetor2#\n");
    for(i = 0; i < 10; i++){
        printf("[%d] ", vetor2[i]);
    }
    printf("\n\n");
    printf("#Vetor juntos em ordem crescente#\n");
    for(i = 0; i < 20; i++){
        printf("[%d] ", vetor3[i]);
    }

    return 0;
}
