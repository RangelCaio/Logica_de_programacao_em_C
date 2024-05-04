#include <stdio.h>

int main(){

    int vetor[10], pos[10] = {0}, i, contador_pos = 0;

    for(i = 0; i < 10; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(vetor[i] >= 0){
            pos[contador_pos] += vetor[i];
            contador_pos++;
        }
    }

    printf("\n");

    printf("#Vetor numeros positivos: ");
    for(i = 0; i < contador_pos; i++){
        printf("[%d]", pos[i]);
    }


    printf("\n");

return 0;
}
