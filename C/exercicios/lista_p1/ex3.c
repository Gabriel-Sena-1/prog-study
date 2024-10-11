#include<stdio.h>
int ja_digitado(int v[], int n, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == n) {  // Corrige o operador de comparação
            return 1;
        }
    }
    return 0;
}

int main(){
    int n = 0, v[100], valor_teste = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &valor_teste);
        if(ja_digitado(v, valor_teste) == 1){
            printf("Digite outro valor\n");
        }else{
            v[i] = valor_teste;
            valor_teste = 0;
        }
    }
    return 0;
}