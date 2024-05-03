#include <stdio.h>

int main() {

int vetor1[10], vetor2[10], vetor3[20], i;

printf("#Vetor1#\n");

for(i = 0; i < 10; i++){
    printf("Digite um numero para vetor1[%d]\n", i);
    scanf("%d", &vetor1[i]);
}

printf("#Vetor2#\n");

for(i = 0; i < 10; i++){
    printf("Digite um numero para vetor2[%d]\n", i);
    scanf("%d", &vetor2[i]);
}

for(i = 0; i < 10; i++){
    vetor3[2*i] = vetor1[i];
    vetor3[2*i+1] = vetor2[i];
}

printf("Vetor3: ");
for(i = 0; i < 20; i++){
    printf("%d ", vetor3[i]);
}

printf("\n");

return 0;
}
