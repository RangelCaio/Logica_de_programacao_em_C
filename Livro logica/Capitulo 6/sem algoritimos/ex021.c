#include <stdio.h>

int main(){

    int vetor1[10], vetor2[10], contador_vetor2 = 0, i;

    for(i = 0; i < 10; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < 10; i++){
        if(vetor1[i] > 0){
            vetor2[contador_vetor2] = vetor1[i];
            contador_vetor2++;
        }
    }

    printf("\n");

    printf("#############Vetor inicinal: ");
    for(i = 0; i < 10; i++){
        printf("[%d]", vetor1[i]);
    }
    printf("\n");

    printf("\n#Vetor sem nulo e negativos: ");
    for(i = 0; i < contador_vetor2; i++){
        printf("[%d]", vetor2[i]);
    }


    printf("\n");

return 0;
}
