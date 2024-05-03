#include <stdio.h>

int main() {

int i, n, j, num;
long long fat;

printf("Digite o valor de n: \n");
scanf("%d", &n);

for(i = 1; i <= n; i++) {
    printf("Digite um numero: \n");
    scanf("%d", &num);

    fat = 1;

    for(j = 1; j <= num; j++) {
        fat *= j;
    }
    printf("O fatorial de %d eh %d\n", num, fat);
}

return 0;
}
