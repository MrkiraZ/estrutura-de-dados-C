/*
    Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
    dinamica de memoria. Em seguida, leia do usuario seus valores e mostre quantos dos
    numeros sao pares e quantos sao ımpares.
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
    printf("Numeros pares do vetor alocado\n");
    for (int j=0; j<sizeUser; j++){
        if (v[j] %2==0){
            printf("%d | ",v[j]);
        }
    }
    puts("\n");
    printf("Numeros Impares do vetor alocado\n");
    for (int k=0; k<sizeUser; k++){
        if (v[k] %2!=0){
            printf("%d | ",v[k]);
        }
    }
    puts("\n");
    free(v);
    return 0;
}