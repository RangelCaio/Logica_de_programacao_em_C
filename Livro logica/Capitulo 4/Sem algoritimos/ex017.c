#include <stdio.h>

int main() {

int senha;

printf("Digite o numero da senha: \n");
scanf("%d", &senha);

if(senha == 4531) {
    printf("Acesso permitido.\n");
}
else {
    printf("Acessao negado.");
}
return 0;
}
