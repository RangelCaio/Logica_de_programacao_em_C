#include <stdio.h>

int main(){

    int vetor1[10], vetor2[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < 10; i++){
        vetor2[i] = vetor1[i];
        if(vetor2[i] == 0){
            vetor2[i] = 1;
        }
    }

    printf("\n");

    printf("#############Vetor inicinal: ");
    for(i = 0; i < 10; i++){
        printf("[%d]", vetor1[i]);
    }
    printf("\n");

    printf("\n#Vetor substituindo 0 por 1: ");
    for(i = 0; i < 10; i++){
        printf("[%d]", vetor2[i]);
    }


    printf("\n");

return 0;
}
