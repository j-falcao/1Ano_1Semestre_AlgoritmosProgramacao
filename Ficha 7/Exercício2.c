#include <stdio.h>

int main()
{
    char operador;
    typedef struct{
        int numerador;
        int denominador;
    }fracao;

    fracao num, num2, resultado;
    printf("Insira o numerador: ");
    scanf("%d", &num.numerador);
    printf("Insira o denominador: ");
    scanf("%d", &num.denominador);

    printf("Insira o numerador: ");
    scanf("%d", &num2.numerador);
    printf("Insira o denominador: ");
    scanf("%d", &num2.denominador);

    printf("Insira o operador( + , - , * , / ) : ");
    scanf(" %c", &operador);

     switch (operador)
    {
    case '+': if(num.denominador==num2.denominador) 
              {
                resultado.numerador = num.numerador + num2.numerador;
                resultado.denominador = num.denominador;
                printf("%d/%d=%f", resultado.numerador, resultado.denominador, (float) resultado.numerador/resultado.denominador);
              } break;
    case '-': if(num.denominador==num2.denominador)
              {
                resultado.numerador = num.numerador - num2.numerador;
                resultado.denominador = num.denominador;
                printf("%d/%d=%f", resultado.numerador, resultado.denominador, (float) resultado.numerador/resultado.denominador);
              } break;
    case '*': resultado.numerador = num2.numerador*num.numerador; 
              resultado.denominador = num2.denominador*num.denominador;
              printf("%d/%d=%f", resultado.numerador, resultado.denominador, (float) resultado.numerador/resultado.denominador); 
              break;
    case '/': resultado.numerador = num.numerador*num2.denominador;
              resultado.denominador = num.denominador*num2.numerador; 
              printf("%d/%d=%f", resultado.numerador, resultado.denominador, (float) resultado.numerador/resultado.denominador);
              break;
    default : printf("operador invalido");break;
} 
}