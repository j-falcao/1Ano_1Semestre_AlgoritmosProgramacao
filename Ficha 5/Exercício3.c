#include <stdio.h>
#include <locale.h>


int perfeito(int x);

void main(){
    setlocale(LC_ALL, "portuguese");
    int a, b, contP = 0, contR = 0, contA = 0;
    do{
        printf("O numero A: ");
        scanf("%d", &a);
        printf("O numero B: ");
        scanf("%d", &b);
        if (a>=b)
        {
            printf("\n\e[1;31mInvalido!\e[m [A < B]");
        }
    }while(a>=b);
    for (int i = a; i < b; i++)
    {
        if (perfeito(i) == 1)
        {
            printf("\nO numero %d é \e[1;32mPerfect\e[m", i);
            contP += 1;
        }
        
        else if (perfeito(i) == 2)
        {
            printf("\nO numero %d é \e[1;33mRedizidos\e[m", i);
            contR += 1;
        }
        
        else if (perfeito(i) == 3)
        {
            printf("\nO numero %d é \e[1;31mAbundantes\e[m", i);
            contA += 1;
        }
    }
    printf("\nSão %d \e[1;32mPerfect\e[m", contP);
    printf("\nSão %d \e[1;33mRedizidos\e[m", contR);
    printf("\nSão %d \e[1;31mAbundantes\e[m", contA);
}

int perfeito(int x){
    int soma = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            soma += i;
        }
    }
    if(soma == x){
        return 1;
    }
    else if(soma > x){
        return 2;
    }
    else if(soma < x){
        return 3;
    }
    return 0;
}
