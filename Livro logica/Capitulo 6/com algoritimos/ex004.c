#include <stdio.h>

int main() {

    int vetor1[8], pos[8] = {0}, neg[8] = {0}, i, neg_count = 0, pos_count = 0;

    printf("#Vetor#\n");
    for(i = 0; i < 8; i++){
        printf("Digite um numero para vetor1[%d]: \n", i);
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < 8; i++){
        if(vetor1[i] >= 0){
            pos[pos_count] = vetor1[i];
            pos_count++;

    }
        else if(vetor1[i] < 0){
            neg[neg_count] = vetor1[i];
            neg_count++;
    }
    }
    printf("#Vetor positivos#\n");
    for(i = 0; i < pos_count; i++){
        printf("%d ", pos[i]);
    }
    printf("\n");

    printf("#Vetor negativos#\n");
    for(i = 0; i < neg_count; i++){
        printf("%d ", neg[i]);
    }


return 0;
}
