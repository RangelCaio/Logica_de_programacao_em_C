#include <stdio.h>

int main(){

    int vetor[10], i, qnt_negativos = 0, soma_positivos = 0;

    printf("Digite 10 valores para o vetor: \n");
    for(i = 0; i < 10; i++){
        printf("Digite o valor para a posicao: [%d]\n", i);
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0) {
            qnt_negativos++;
        }

        else if(vetor[i] >= 0) {
            soma_positivos += vetor[i];
        }
        }
    printf("A quantidade de numeros negativos eh: %d\n", qnt_negativos);
    printf("A soma dos numeros positivos eh: %d\n", soma_positivos);

return 0;
}
