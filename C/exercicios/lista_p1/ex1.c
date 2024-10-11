#include<stdio.h>

void emprestimo(float salario, float prestacao){
    if(prestacao > (salario * 0.2)){
        printf("Empréstimo não concedido.\n");
        return;
    }
    printf("Empréstimo concedido.\n");
}

int main(){
    float salario = 0;
    float prestacao = 0;

    scanf("%f", &salario);
    scanf("%f", &prestacao);
    
    emprestimo(salario, prestacao);
    return 0;
}