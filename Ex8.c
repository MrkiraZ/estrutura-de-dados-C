/*
    Faca um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int,
    usando a funcao de alocacao dinamica de memoria CALLOC:
        (a) Faca um loop e verifique se o vetor contem realmente
         os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
        (b) Atribua para cada elemento do vetor o valor do seu ındice junto a este vetor.
        (c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *v;
    int n=1500,cont=0;
    v= (int*) calloc(n,sizeof(int));
    //A: verificando se o vetor possui todos os 1500 valores iniciados com 0
    for(int i=0; i<n; i++){
        if (v[i]==0){
            cont++;
        }
    }
    printf("\n----------------------------------------------------------------------------\n");
    printf("A: %d",cont);
    printf("\n----------------------------------------------------------------------------\n");
    //B: atribuindo o valor correspondente ao seu indice ao vetor
    for(int i=0; i<n; i++){
        v[i]=i;
    }
    //C: primeiros 10 elementos e ultimos 10 elementos
    printf("Primeiros 10 elementos do vetor dinamico:\n");
    for(int i=0; i<10;i++){
        printf("|%d| ",v[i]);
    }
    printf("\n----------------------------------------------------------------------------\n");
    printf("Ultimos 10 elementos do vetor dinamico:\n");
    for(int i=n-1; i>1489;i--){
        printf("|%d| ",v[i]);
    }
    printf("\n----------------------------------------------------------------------------\n");
    free(v);//Liberando espaço alocado blessed
    return 0;
}