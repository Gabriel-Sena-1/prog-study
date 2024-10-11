#include<stdio.h>

void busca_binaria(int array[], int tam, int elemento){
    int inicio = 0, meio = 0, fim = tam;
    for (int i = 0; i < tam; i++){
        meio = (inicio+fim)/2;

        if(array[meio] == elemento){
            printf("Você achou o seu elemento, ele está na posição: %d\n\n", meio);
            return;
        }else if(array[meio] > elemento){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
}


int main(){
    int vetor[4] = {1, 3, 4, 5};


    busca_binaria(vetor, 4, 3);
    return 0;
}