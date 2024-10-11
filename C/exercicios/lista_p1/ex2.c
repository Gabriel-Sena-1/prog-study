#include<stdio.h>



int main(){
    int n = 0, maior = 0;
    int num[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        if(num[i] > maior){
            maior = num[i];
        }
    }

    int contador = 0;
    for (int i = 0; i < n; i++){
        if(maior == num[i]){
            contador++;
        }
    }
    printf("contador: %d\n", contador);
    
    return 0;
}