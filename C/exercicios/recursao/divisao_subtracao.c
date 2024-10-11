#include<stdio.h>

int divisao(int a, int b){
    if(a < b){
        return 0;
    }
    return 1 + divisao(a-b, b);
}


int main(){
    int num = 0, divisor = 0;

    scanf("%d", &num);
    scanf("%d", &divisor);

    int resultado = divisao(num, divisor);
    printf("a resposta de %d/%d é igual a: %d\n\n", num, divisor, resultado);
    return 0;
}