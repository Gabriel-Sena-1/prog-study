#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
    char string[MAX], string_entrada[MAX];
    char temp;
    int tam_s1 = 0, tam_s2 = 0, ocorrencias = 0;

    fgets(string, MAX, stdin);
    scanf("%c", &temp);
    fgets(string_entrada, MAX, stdin);

    tam_s1 = strlen(string) - 1;
    tam_s2 = strlen(string_entrada) - 1;

    string[tam_s1] = '\0';
    string_entrada[tam_s2] = '\0';

    for (int i = 0; i < tam_s1 - tam_s2; i++){
        int count = 0;
        for (int j = 0; j < tam_s2; j++){
            if(string[i + j] == string_entrada[j]){
                count++;
            }else{
                break;
            }
        }
        if(count == tam_s2){
            ocorrencias++;
        }
    }
    
    printf("\n\nOcorrencias da string 1 na 2: %d\n\n", ocorrencias);

    return 0;
}