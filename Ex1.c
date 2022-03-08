/*
    1. Crie um programa que:
    (a) Aloque dinamicamente um array de 5 numeros inteiros,
    (b) Peca para o usuario digitar os 5 numeros no espaco alocado, 
    (c) Mostre na tela os 5 numeros,
    (d) Libere a memoria alocada. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    v= (int*) malloc( 5 * sizeof(int));
    printf("Insira os 5 numeros do vetor dinamico: ");
    for (int i=0; i<5;i++){
        scanf("%d",&v[i]);
    }
    for (int j=0; j<5;j++){
        printf("%d | ",v[j]);
    }
    free(v);
    return 0;
}