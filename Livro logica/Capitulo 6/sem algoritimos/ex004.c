#include <stdio.h>

int main(){

    int vetor[15], posicoes[15], i, contador = 0;

    for(i = 0; i < 15; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 15; i++){
        if(vetor[i] == 30){
            posicoes[contador] = i;
            contador++;
        }
    }
    printf("\n\nNumero 30 encontrado na posicao: ");
    for(i = 0; i < contador; i++){
        printf("[%d]", posicoes[i]);
    }

    printf("\n");

return 0;
}
