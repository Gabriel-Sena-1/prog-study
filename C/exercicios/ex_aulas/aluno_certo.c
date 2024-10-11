#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float n1, n2;
    float media;
} aluno;

void media_maior(aluno *sala, int n) {
    int i, j = 0;
    float maior_media = sala[0].media;
    
    for(i = 1; i < n; i++) {
        if(sala[i].media > maior_media) {
            maior_media = sala[i].media;
            j = i;
        }
    }
    
    printf("%s\n", sala[j].nome);
}

int main() {
    int n, i, tam;
    aluno *sala;
    
    scanf("%d", &n);
    getchar();
    
    sala = (aluno*) malloc(n * sizeof(aluno));
    
    for(i = 0; i < n; i++) {
        fgets(sala[i].nome, 50, stdin);
        tam = strlen(sala[i].nome) - 1;
        if(sala[i].nome[tam] == '\n') sala[i].nome[tam] = '\0';
        
        scanf("%f", &sala[i].n1);
        scanf("%f", &sala[i].n2);
        getchar();
        
        sala[i].media = (sala[i].n1 + sala[i].n2) / 2;
    }
    
    media_maior(sala, n);
    
    free(sala);
    
    return 0;
}