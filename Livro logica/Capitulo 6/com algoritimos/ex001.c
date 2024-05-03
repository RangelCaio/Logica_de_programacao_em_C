#include <stdio.h>

int main() {

int vetor[9], i, j, cont;

printf("Vetor[9]\n");

for(i = 0; i < 9; i++){
    printf("Digite um numero para vetor[%d]\n", i);
    scanf("%d", &vetor[i]);
}

for(i = 0; i < 9; i++){
    if(vetor[i] == 1){
        continue;
    }
    cont = 0;
    for(j = 1; j <= vetor[i]; j++){
        if(vetor[i] % j == 0){
            cont++;
        }
    }

    if(cont <= 2) {
        printf("Numero primo encontrado: %d na posicao %d\n", vetor[i], i + 1);
    }
}

return 0;
}
