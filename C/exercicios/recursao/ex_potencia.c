#include<stdio.h>

float potencia(int x, int n){
    if(n == 0){
        return 1;
    }
    return x * potencia(x, n-1);
}


int main(){
    int num = 0, pot = 0;

    scanf("%d", &num);
    scanf("%d", &pot);

    float resultado = potencia(num, pot);
    printf("a resposta de %d^%d é igual a: %f\n\n", num, pot, resultado);
    return 0;
}