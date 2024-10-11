#include <stdio.h>
#define MAX 50

typedef struct{
    char nome[MAX];
    char esporte[MAX];
    int idade;
    float altura;
} atleta;


int main(){
    atleta atletas[3];
    char temp;

    int id_maior_atleta = 0, id_mais_velho = 0, atleta_mais_velho = 0;
    float altura_maior_atleta = 0;
    for (int i = 0; i < 3; i++){
        printf("Insira o nome do atleta %d:\n", i+1);
        fgets(atletas[i].nome, MAX, stdin);
        printf("Insira o esporte do atleta %d:\n", i+1);
        fgets(atletas[i].esporte, MAX, stdin);
        printf("Insira a idade do atleta %d:\n", i+1);
        scanf("%d", &atletas[i].idade);
        printf("Insira a altura do atleta %d:\n", i+1);
        scanf("%f", &atletas[i].altura);
        scanf("%c", &temp);

        if(atletas[i].idade > atleta_mais_velho){
            atleta_mais_velho = atletas[i].idade;
            id_mais_velho = i;
        }

        if(atletas[i].altura > altura_maior_atleta){
            altura_maior_atleta = atletas[i].altura;
            id_maior_atleta = i;
        }
    }

    printf("%s", atletas[id_maior_atleta].nome);
    printf("%s", atletas[id_mais_velho].nome);


    return 0;
}