#include <stdio.h>

int main() {

int cont, cod, num_vei, num_acid, maior, cid_maior, menor, cid_menor, soma_vei = 0, soma_acid = 0, cont_acid = 0;
float media_vei, media_acid;

soma_vei = 0;
soma_acid = 0;
cont_acid = 0;

for(cont = 1;  cont <= 5; ++cont) {
    printf("Digite o codigo, numero de veiculos e numero de acidentes para cada cidade: \n");
    scanf("%d %d %d", &cod, &num_vei, &num_acid);

    if(cont == 1){
        maior = num_acid;
        cid_maior = cod;
        menor = num_acid;
        cid_menor = cod;
}
    else {
        if (num_acid > maior) {
            maior = num_acid;
            cid_maior = cod;
}
        if (num_acid < menor) {
            menor = num_acid;
            cid_menor = cod;
}
}
soma_vei += num_vei;

if (num_vei < 2000) {
    soma_acid += num_acid;
    cont_acid++;
}
}

printf("Cidade com mais acidentes: %d (Numero de acidentes: %d)\n", cid_maior, maior);
printf("Cidade com menos acidentes: %d (Numero de acidentes: %d\n", cid_menor, menor);


media_vei = soma_vei / 5;
printf("Média de veículos: %.2f\n", media_vei);

if (cont_acid == 0) {
        printf("Não foi digitada nenhuma cidade com menos de 2000 veículos\n");
    } else {
        media_acid = soma_acid / cont_acid;
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %f\n", media_acid);
    }

return 0;
}


