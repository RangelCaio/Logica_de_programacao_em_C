#include <stdio.h>

int main(){

    int vetor[7], i, mult2[7], mult3[7], mult23[7], qnt_mult2 = 0, qnt_mult3 = 0, qnt_mult23 = 0;

    printf("#Vetor#\n");
    for(i = 0; i < 7; i++){
        printf("Digite um numero para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 7; i++){

        if(vetor[i] % 2 == 0){
            mult2[qnt_mult2] = vetor[i];
            qnt_mult2++;
        }
        if(vetor[i] % 3 == 0){
            mult3[qnt_mult3] = vetor[i];
            qnt_mult3++;
        }
        if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0){
            mult23[qnt_mult23] = vetor[i];
            qnt_mult23++;
        }
    }

    printf("\n\n#Multiplos de dois: ");
    for(i = 0; i < qnt_mult2; i++){
        printf("[%d]", mult2[i]);
    }
    printf("\n\n#Multiplos de tres: ");
    for(i = 0; i < qnt_mult3; i++){
        printf("[%d]", mult3[i]);
    }
    printf("\n\n#Multiplos de dois e tres: ");
    for(i = 0; i < qnt_mult23; i++){
        printf("[%d]", mult23[i]);
    }
       printf("\n\n");

return 0;
}
