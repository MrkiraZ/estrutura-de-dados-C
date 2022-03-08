/*
    Faca um programa que leia um numero N e:
    • Crie dinamicamente e leia um vetor de inteiro de N posicoes;
    • Leia um numero inteiro X e conte e mostre os multiplos desse numero que existem no vetor.
      
*/
#include <stdio.h>
#include <stdlib.h>
void verifica(int *, int);
int main(){
    int *v;
    int n,x,multi;
    printf("Insira o tamanho do vetor: ");
    scanf("%d",&n);
    v= (int*) malloc( n * sizeof(int));
    printf("Insira os %d numeros do vetor dinamico: ", n);
    for (int i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    printf("Insira o numero X: ");
    scanf("%d",&x);
    for (int i=0; i<n; i++){
                if (v[i]%x==0){
                    printf("%d | ",v[i]);
            }
        }        
    free(v);
    return 0;
}
