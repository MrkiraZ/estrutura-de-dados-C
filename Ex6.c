/*
    Faca um programa que simule a memoria de um computador: o usuario ira especificar o 
    tamanho da memoria, ou seja, quantos bytes serao alocados do tipo inteiro. Para 
    tanto, a memoria solicitada deve ser um valor multiplo do tamanho do tipo inteiro. 
    Em seguida, o usuario tera 2 opcoes:
        • inserir um valor em uma determinada posicao ou consultar o valor contido em uma determinada posicao.
        • A memoria deve iniciar com todos os dados zerados.   
*/
#include <stdio.h>
#include <stdlib.h>
void inserir(int *);
void consultar(int *);
int main(){
    int *v;
    unsigned int memory,op;
    printf("Insira o tamanho da memoria: ");
    scanf("%d",&memory);
    v= (int*) malloc( memory * sizeof(int));
    //zerando valores da memoria
    for(int i=0; i<memory; i++){
        v[i]=0;
    }
    do{
        printf("-----------------------------------------------------\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Inserir valor em alguma posicao:\n");
        printf("2 - Consultar valor de alguma posicao\n");
        printf("0 - SAIR\n");
        printf("-----------------------------------------------------\n");
        printf("Opcao: ");
        scanf("%d",&op);
        switch (op)
        {
            case 1: inserir(v);
            break;
            case 2: consultar(v);
            break;
            case 3: break; // Encerra
            default: printf("Opcao invalida, tente novamente\n");
        }    
    }while(op!=0);
        free(v);
    return 0;
    }


void inserir(int *v){
    int x;
    unsigned int pos;
    printf("Em qual posicao vc deseja inserir o valor?\n");
    scanf("%d",&pos);
    if(pos>sizeof(v)){
        printf("ERROR: a posicao informada maior do que a disponivel em memoria\n");
        return;
    }
    printf("valor que deseja inserir memoria: ");
    scanf("%d",&x);
    v[pos]=x;
}

void consultar(int *v){
    unsigned int pos;
    printf("Em qual posicao vc deseja realizar a consulta?\n");
    scanf("%d",&pos);
    if(pos>sizeof(v)){
        printf("ERROR: a posicao informada nao existe em memoria\n");
        return;
    }
    printf("---------------------------------------------------\n");
    printf("o valor contido na posicao %d: %d\n",pos,v[pos]);
}
