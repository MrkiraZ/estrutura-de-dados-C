/*
    Faca um programa que receba do usuario o tamanho de uma string e chame uma
    funcao para alocar dinamicamente essa string. Em seguida, o usuario devera informar o 
    conteudo dessa string. O programa imprime a string sem suas vogais. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *v;
    int tam_String;

    printf("Insira o tamanho da string: ");
    scanf("%d",&tam_String);

    v= (char*) malloc( tam_String * sizeof(char));
    printf("Insira a string: ");
        scanf(" %[^\n]",v);
    printf("------------------------------------\n");
    printf("String completa\n");
    for (int i=0; i<tam_String; i++){
            printf("%c",v[i]);
    }
    printf("\n------------------------------------\n");
    printf("String sem Vogais\n");
       for(int k=0; k <tam_String; k++){
        if(v[k]!= 'a' && v[k]!= 'A' && v[k]!= 'e' && v[k]!= 'E' && v[k]!= 'i' && v[k]!= 'I' && v[k]!= 'o' && v[k]!= 'O' && v[k]!= 'u' && v[k]!= 'U' 
            && v[k]!= ' '&& v[k]!= '\0'){
            printf("%c | ", v[k]);
       }
       }
    puts("\n");
    free(v);
    return 0;
}