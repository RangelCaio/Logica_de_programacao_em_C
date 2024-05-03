#include <stdio.h>

int main() {

int i, n, j;
float e = 1.0, fat = 1.0;

printf("digite o valor de n: \n");
scanf("%d", &n);

for (i = 1; i <= n; i++){
    fat = 1.0;
    for(j = 1; j <= i; j++) {
        fat *= j;
    }
    e += 1.0 / fat;
 }

printf("O valor de e: %.2f\n", e);

return 0;
}
