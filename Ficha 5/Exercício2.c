#include <stdio.h>

int resto(int x, int y);
char* impar(int x);
char* perfeito(int x);
char* primo(int x);

void main(){
    int x, y, res;
    printf("Digite um numero X: ");
    scanf("%d", &x);
    printf("Digite um numero Y: ");
    scanf("%d", &y);
    res = resto(x, y);
    printf("\nO resto de divisão de %d por %d é %d ", x, y, res);
    printf("\nO numero %d e %s ", x, impar(x));
    printf("\nO numero %d e %s", x, perfeito(x));
    printf("\nO numero e %s", primo(x));
    
    
}

int resto(int x, int y){
    return x % y;
}

char* impar(int x){
    if(x % 2 != 0){
        return "impar";
    }
    else{
        return "par";
    }
}

char* perfeito(int x){
    int soma = 0;
    for (int i = 1; i < x; i++)
    {
        
        if (x % i == 0)
        {
            soma += i;
        }
        
    }
    if(soma == x){
        return "\e[1;32mPerfect\e[m";
    }
    else{
        return "\e[1;31mNot Perfect\e[m";
    } 
    
}

char* primo(int x){
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            return "não primo";
            
        }
        else{
            return "primo";
        }
    }
}
