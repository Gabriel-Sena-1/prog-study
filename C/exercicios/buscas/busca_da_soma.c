#include<stdio.h>
#define MAX 200

void busca_soma(int array[], int tam, int elemento){
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if((array[i] + array[j]) == elemento){ // O(n^2) -> conforme o tamanho do vetor aumenta, o pior caso aumenta de acordo com o quadrado do vetor
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("-1 -1\n");
}


int main(){
    int vetor[MAX];
    int tam = 0, elemento_busca = 0;
    
    scanf("%d", &tam);
    for (int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &elemento_busca);

    busca_soma(vetor, tam, elemento_busca);
    return 0;
}