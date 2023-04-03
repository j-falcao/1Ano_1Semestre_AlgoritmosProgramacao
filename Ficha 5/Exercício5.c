#include <stdio.h>

int grandeza(int x, int y);

void main(){
    int x, y;
    printf("Digite um numero X: ");
    scanf("%d", &x);
    printf("Digite um numero Y: ");
    scanf("%d", &y);
    printf("O maior entre %d e %d é %d", x, y, grandeza(x, y));
}

int grandeza(int x, int y){
    int maior;
    maior = x;
    if (x < y)
    {
        maior = y;
    }
    return maior;
}
