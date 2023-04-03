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
        printf("\n� um digito ");
    }
    else{
        printf("\nn�o � um digito ");
    }
    if (letra(c))
    {
        printf("\n� uma letra ");
        printf("\nEm ma�sculo � %c ", maiusculo(c));
        printf("\nEm min�sculo � %c ", minusculo(c));
    }
    else{
        printf("\nn�o � um letra ");
    }
    if (alphanumerico(c))
    {
        printf("\n� alphanumerico ");
    }
    else{
        printf("\nn�o � alphanumerico ");
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
    printf("\nO resto de divis�o de %d por %d � %d ", x, y, res);
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
            return "n�o primo";
            
        }
        else{
            return "primo";
        }
    }
}
