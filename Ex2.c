/*
    Facca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
    dinamica de memoria. Em seguida, leia do usuario seus valores e imprima o vetor lido.  
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    int sizeUser;
    printf("Insira o tamanho do vetor: ");
    scanf("%d",&sizeUser);
    v= (int*) malloc( sizeUser * sizeof(int));
    printf("Insira os %d numeros do vetor dinamico: ", sizeUser);
    for (int i=0; i<sizeUser; i++){
        scanf("%d",&v[i]);
    }
    for (int j=0; j<sizeUser; j++){
        printf("%d | ",v[j]);
    }
    free(v);
    return 0;
}