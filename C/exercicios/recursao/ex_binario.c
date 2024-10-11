#include<stdio.h>

void dec2bin(int input){
    if(input == 0){
        return;
    }

    dec2bin(input/2);
    printf("%d", input%2);
}


int main(){
    int num = 0;
    scanf("%d", &num);

    dec2bin(num);
    return 0;
}