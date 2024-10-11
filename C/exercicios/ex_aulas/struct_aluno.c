#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[100];
    float p1;
    float p2;
} Aluno;


int main(){
    Aluno* alunos;
    int qtd_alunos = 0;
    char temp;
    
    scanf("%d", &qtd_alunos);
    scanf("%c", &temp);

    alunos = (Aluno*) malloc(qtd_alunos*sizeof(Aluno));

    int maior = 0, indice_maior = 0;
    for (int i = 0; i < qtd_alunos; i++){
        fgets(alunos[i].nome, 100, stdin);
        scanf("%c", &temp);
        scanf("%f", &alunos[i].p1);
        scanf("%f", &alunos[i].p2);

        if(alunos[i].p1 + alunos[i].p2 > maior){
            maior =  alunos[i].p1 + alunos[i].p2;
            indice_maior = i;
        }
    }

    printf("%s", alunos[indice_maior].nome);
    free(alunos);

    return 0;
}