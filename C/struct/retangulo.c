#include <stdio.h>
#define MAX 50
#include<math.h>

typedef struct{
    int x;
    int y;
} Ponto;

typedef struct{
    Ponto ponto_sup_esquerdo;
    Ponto ponto_inf_direito;
} Retangulo;

int areaRetangulo(Retangulo ret){
    return (ret.ponto_inf_direito.x - ret.ponto_sup_esquerdo.x)*(ret.ponto_sup_esquerdo.y - ret.ponto_inf_direito.y);
}

int diagonalRetangulo(Retangulo ret){
    int comprimento = (ret.ponto_inf_direito.x - ret.ponto_sup_esquerdo.x);
    int largura = (ret.ponto_sup_esquerdo.y - ret.ponto_inf_direito.y);
    int diagonal = (int)sqrt((comprimento * comprimento) + (largura * largura));

    return diagonal;
}

int main(){
    Retangulo ret;

    scanf("%d", &ret.ponto_sup_esquerdo.x);
    scanf("%d", &ret.ponto_sup_esquerdo.y);
    scanf("%d", &ret.ponto_inf_direito.x);
    scanf("%d", &ret.ponto_inf_direito.y);
    
    printf("\n\n%d\n", areaRetangulo(ret));
    printf("%d\n\n", diagonalRetangulo(ret));

    return 0;
}