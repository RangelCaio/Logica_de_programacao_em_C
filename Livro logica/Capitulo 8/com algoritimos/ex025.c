#include <stdio.h>

void funcaozero(int vetor[25]) {

    for(int i = 0; i < 25; i++){
        if(vetor[i] >= 0){
            vetor[i] = vetor[i];
        }
        else {
            vetor[i] = 0;
        }
    }
}

int main() {

    int vetor[25], vetor_result[25], i;

    for(i = 0; i < 25; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    funcaozero(vetor);

    printf("\n## vetor substituindo os negativos por zero ## \n");

    printf("\n## vetor");
    for(i = 0; i < 25; i++){
        printf("[%d]", vetor[i]);
    }
    printf(" ##\n");

return 0;
}
