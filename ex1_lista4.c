#include <stdio.h>

typedef struct Dados{
   char nome[255];
   int idade;
   char endereco[200];
}TDados;


int main(){
    const int tam=3;
    TDados Dados[tam];
    int i;
    
    for(i=0; i<tam; i++){
        printf("\nForneca o nome: ");
        gets(Dados[i].nome);
        setbuf(stdin, NULL);
        printf("\nForneca a idade: ");
        scanf("%d", &Dados[i].idade);
        setbuf(stdin, NULL);
        printf("\nForneca o endereco:");
        gets(Dados[i].endereco);
        setbuf(stdin, NULL);
    }
    
    
    
    for(i=0; i<tam; i++){
       printf("\nNome: %s", Dados[i].nome);
       printf("\nIdade: %d", Dados[i].idade);
       printf("\nEndereco: %s", Dados[i].endereco);
       printf("\n________________________\n");
    }
    
    system ("PAUSE");
    
    return 0;
}
