#include <stdio.h>

#define MAX 100

int main() {
    int qt, vetor[MAX], ocorrencias[MAX] = {0}, i, j;
    int contador_unicos = 0;

    scanf("%d", &qt);
    for (i = 0; i < qt; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < qt; i++) {
        for (j = 0; j < qt; j++) {
            if (vetor[i] == vetor[j]) {
                ocorrencias[i]++;
            }
        }
    }

    for (i = 0; i < qt; i++) {
        if (ocorrencias[i] == 1) {
            contador_unicos++;
        }
    }

    printf("%d\n", contador_unicos);
    return 0;
}
