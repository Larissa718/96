#include <stdio.h>

typedef struct Aluno{
     char nome[200];
     char curso[200];
     int matricula;
}TAluno;

int main(){
    const int tam=5;
    TAluno Aluno[tam];
    int i;
    
    for(i=0; i<tam; i++){
       printf("\nForneca a matricula do aluno:");
       gets(Aluno[i].matricula);
       setbuf(stdin, NULL);
       printf("\nForneca o nome do aluno: ");
       gets(Aluno[i].nome);
       setbuf(stdin, NULL);
       printf("\nForneca a idade do aluno: ");
       scanf("%d", &Aluno[i].idade);
       setbuf(stdin, NULL);
    }
    
