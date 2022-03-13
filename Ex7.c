/*
    Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6
    numeros do seu bilhete. O programa entao compara quantos numeros o jogador acertou.
    Em seguida, ele aloca espaco para um vetor de tamanho igual a quantidade de numeros
    corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os
    numeros sorteados e os seus numeros corretos. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *v;
    int lotery[7],user_numbers[7],cont=0;
    v= (int*) calloc(cont,sizeof(int));
    //input
    printf("Insira os numeros gerados pela loteria:  ");
    for(int i=0; i<6; i++){
        scanf("%d",&lotery[i]);
        }
    printf("Insira os numeros do bilhete do jogador: ");
    for(int i=0; i<6; i++){
        scanf("%d",&user_numbers[i]);
        }
    // Verificando numentos da loteria com o numero do jogador,
    // caso encontre eh alocado um espaco na memoria e armazenado dentro do vetor dinamico esse conteudo
    for(int i=0; i<6;i++){
        if(lotery[i] == user_numbers[i]){
            cont++;
            v =(int *) realloc( v, cont*sizeof(int) );
            v[cont-1]= user_numbers[i];
        }
    }
    //output
    printf("Numeros da loteria: ");
    for(int i=0; i<6; i++){
        printf("%d | ",lotery[i]);
    }
    printf("\nNumeros corretos do jogador: ");
    for(int i=0; i<cont; i++){
        printf("%d | ",v[i]);
    }
    free(v);//Liberando espaço alocado blessed
    return 0;
}