#include <stdio.h>

int main(){

    int vetor[10], pos = 0, i, neg[10] = {0}, contador_pos = 0, contador_neg = 0;

    for(i = 0; i < 10; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(vetor[i] >= 0){
            pos += vetor[i];
            contador_pos++;
        }
        if(vetor[i] < 0){
            neg[contador_neg] += vetor[i];
            contador_neg++;
        }
    }
    printf("\n\n#Soma dos numeros positivos: %d\n", pos);

    printf("\n");

    printf("#Vetor numeros negativos: ");
    for(i = 0; i < contador_neg; i++){
        printf("[%d]", neg[i]);
    }


    printf("\n");

return 0;
}
