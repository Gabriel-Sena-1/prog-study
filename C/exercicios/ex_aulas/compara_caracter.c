#include<stdio.h>
#include<stdlib.h>

//Elabore uma programa que lê uma string (pode conter espaço) e um caractere. Use aritmética de ponteiros para acessar os caracteres da string e contar a ocorrência do caractere. Caracteres maiúsculos e minúsculos devem ser tratados como diferentes.

int main(){
    char str[999];
    char caracter;
    int i = 0, n = 0;

    fgets(str, 999, stdin);
    scanf("%c", &caracter);

    for (int i = 0; *(str+i) != '\0'; i++){
        if(*(str+i) == caracter){
            n++;
        }
    }
    
    printf("%d\n", n);
    return 0;
}