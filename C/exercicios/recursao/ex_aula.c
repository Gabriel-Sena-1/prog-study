#include<stdio.h>

int ocorrencias(int * vet, int i, int num, int count){
    if(i < 0){
        return count;
    }

    if(vet[i] == num){
        count++;
    }
    
    ocorrencias(vet, i-1, num, count);
}


int main(){
    int vetor[] = {1, 3, 4, 5, 3, 2, 6};
    int x = 0;

    x = ocorrencias(&vetor[0], 6, 3, 0);
    
    printf("%d ocorrencias\n", x);
    return 0;
}