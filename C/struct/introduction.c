#include<stdio.h>
#include<string.h>
#define MAX_STRING 50


struct alunos{
  char nome[MAX_STRING];
  int rga;  
};

void printaAlunos(struct alunos aluno){
    printf("\n\nNome do aluno: %s", aluno.nome);
    printf("RGA do aluno: %d\n", aluno.rga);
}


int main(){
    struct alunos alunos[3];
    char temp;

    for (int i = 0; i < 3; i++){
        printf("digite o nome do aluno %d:\n", i+1);
        fgets(alunos[i].nome, MAX_STRING, stdin);
        printf("digite o rga do aluno %d:\n", i+1);
        scanf("%d", &alunos[i].rga);
        scanf("%c", &temp);
    }

    for (int i = 0; i < 3; i++){
        printaAlunos(alunos[i]);
    }

    return 0;
}