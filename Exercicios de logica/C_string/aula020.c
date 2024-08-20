#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*
    Inverter uma string
*/

// FORMA 1
void inverter(char vet[]){

    int i, aux, fim, tam = strlen(vet);

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim --;
    }
}

// FORMA 2
char* inverter2(char vet[]){

    int i, aux, fim, tam = strlen(vet);
    char *novo = malloc((tam + 1 ) * sizeof(char)); //alocacao de tamanho dinamico

    fim = tam - 1;
    for(i = 0; i < tam; i++){
        novo[fim] = vet[i];
        fim--;
    }
    novo[i] = '\0';
    return novo;
}

int main(){

    char palavra[25];
    char *p;

    printf("Digite uma string: ");
    fgets(palavra, 25, stdin);

    printf("\nOriginal: %s\n", palavra);
    inverter(palavra);
    printf("\nModificada: %s\n", palavra);

    p = inverter2(palavra);
    printf("\n%s\n", p);

    return 0;
}
