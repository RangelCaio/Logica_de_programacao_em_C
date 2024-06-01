#include <stdio.h>

int somar(int vetor[]){

    int soma_vetor = 0;

    for(int i = 0; i < 20; i++){
        soma_vetor += vetor[i];
    }
    return soma_vetor;
}

int main() {

    int vetor[20], soma, i;

    for(i = 0; i < 20; i++) {
        printf("Digite um numero para vetor[%d]: ",i);
        scanf("%d", &vetor[i]);
    }

    soma = somar(vetor);

    printf("O resultado da soma dos numeros do vetor eh: %d\n",soma);

return 0;
}
