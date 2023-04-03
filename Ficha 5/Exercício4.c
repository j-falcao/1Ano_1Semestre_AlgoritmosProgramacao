#include <stdio.h>

int potencia(int x, int y);
void pedido();

void main(){
    pedido();
}

void pedido(){
    int n, e;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Qual o exponte? ");
    scanf("%d", &e);
    printf("%d", potencia(n, e));
}

int potencia(int x, int y){
    int resultado = 1;
    for (int i = 0; i < y; i++){
        resultado *= x;
    }
    return resultado;
}
