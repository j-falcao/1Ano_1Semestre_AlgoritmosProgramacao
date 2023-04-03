#include <stdio.h>

int digito(char c);
int letra(char c);
int alphanumerico(char c);
char minusculo(char c);
char maiusculo(char c);

void main(){
    char c;
    printf("Digite: ");
    scanf("%c", &c);
    if (digito(c))
    {
        printf("\né um digito ");
    }
    else{
        printf("\nnão é um digito ");
    }
    if (letra(c))
    {
        printf("\né uma letra ");
        printf("\nEm maúsculo é %c ", maiusculo(c));
        printf("\nEm minúsculo é %c ", minusculo(c));
    }
    else{
        printf("\nnão é um letra ");
    }
    if (alphanumerico(c))
    {
        printf("\né alphanumerico ");
    }
    else{
        printf("\nnão é alphanumerico ");
    }
    
}


int digito(char c){
    if ( c >= '0' && c<= '9')
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int letra(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int alphanumerico(char c){
    if (((c >= 'a' && c <= 'z') || c >= '0' && c<= '9') || ((c >= 'A' && c <= 'Z') || c >= '0' && c<= '9'))
    {
        return 1;
    }
    else{
        return 0;
    }
}

char minusculo(char c){
    if ( c >= 'A' && c<= 'Z')
    {
        return c + 32;
    }
    else{
        return c;
    }
    
}

char maiusculo(char c){
    if ( c >= 'a' && c<= 'z')
    {
        return c - 32;
    }
    else{
        return c;
    }
    
}

 Exercicio 1
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
