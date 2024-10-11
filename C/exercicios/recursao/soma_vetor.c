#include<stdio.h>

int soma_vetor(int* vetor, int i){
    if(i < 0){
        return 0;
    }
    return vetor[i] + soma_vetor(vetor, i-1);
}


int main(){
    int vetor_teste[] = {1, 3, 4, 6};
    int tam_vetor = 4;
    int* p = &vetor_teste[0];
    int resultado = 0;

    resultado = soma_vetor(p, tam_vetor-1);

    printf("a soma do vetor eh: %d\n\n", resultado);

    return 0;
}