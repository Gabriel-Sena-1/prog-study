#include<stdio.h>
#include<stdlib.h>

int main(){
    int array1[3];
    int array2[3];
    int array3[3];
    int array4[3];
    int array5[3];
    int numArrays = 5, tamanhoArray = 3;
    int* arrayDePonteiros[] = {array1, array2, array3, array4, array5};
    
    for (int i = 0; i < numArrays; i++) {
        for (int j = 0; j < tamanhoArray; j++) {
            scanf("%d", (*(arrayDePonteiros + i) + j));
        }
        printf("\n");
    }
 
    int soma = 0;

    for (int coluna = 0; coluna < 3; coluna++){
        soma += *(*(arrayDePonteiros)+coluna);
    }

    for (int linha = 0; linha < 5; linha++){ 
        soma += *(*(arrayDePonteiros+linha)+2);
    }

    printf("\nsoma: %d\n", soma);
    return 0;
}
