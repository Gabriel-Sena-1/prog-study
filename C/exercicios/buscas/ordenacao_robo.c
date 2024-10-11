    #include <stdio.h>
    #include <string.h>
    #define MAX 100

    int menor_valor(int *vetor, int tamanho, int inicio) {
    int indice = inicio;

    for (int i = inicio + 1; i < tamanho; i++) {
        if (vetor[i] < vetor[indice]) {
            indice = i;
        }
    }
    return indice;
    }

    int maior_valor(int *vetor, int tamanho, int inicio) {
    int indice = inicio;

    for (int i = inicio + 1; i < tamanho; i++) {
        if (vetor[i] > vetor[indice]) {
            indice = i;
        }
    }
        return indice;
    }

    void selection_sort(int *vetor, int tamanho, int * sentido) {
        if((*sentido) == 1){
            (*sentido)++;
            for (int i = 0; i < tamanho - 1; i++) {
                int i_menor = menor_valor(vetor, tamanho, i);
                int temp = 0;
                temp = vetor[i];
                vetor[i] = vetor[i_menor];
                vetor[i_menor] = temp;
            }
        }else{
            for (int i = 0; i < tamanho - 1; i++) {
                int i_menor = maior_valor(vetor, tamanho, i);
                int temp = 0;
                temp = vetor[i];
                vetor[i] = vetor[i_menor];
                vetor[i_menor] = temp;
            }
        }
    }

    int main() {
    int vetor[MAX];
    int n = 0;
    int sentido = 1;
    int* ptr_sentido = &sentido;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf(" Lista original dos robôs: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    selection_sort(vetor, n, ptr_sentido);

    printf("\nOrdem crescente dos robôs: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    
    selection_sort(vetor, n, ptr_sentido);
    printf("\nOrdem decrescente dos robôs: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    } 

    int final = n-1;
    printf("\nChaveamento de torneio:");
    for (int i = 0; i < n/2; i++){
        printf("\nPartida %d: Robô de força %d vs Robô de força %d", i+1, vetor[final], vetor[i]);
        final--;
    }
    if(n % 2 != 0){
        printf("\nRobô de força %d está sem adversário na primeira rodada.\n", vetor[(n/2)]);
    }
    
    return 0;
    }