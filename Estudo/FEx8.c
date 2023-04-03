#include <stdio.h>

//						CALCULADORA BÁSICA

int main(void)
{
	float num1, num2, resultado;
	char OP; 
	
	printf("Insira dois numeros: ");
	scanf("%f%f", &num1, &num2);
	printf("Insira um operador ('*' '/' '+' '-'): ");
	scanf(" %c", &OP);
	
	switch(OP)
	{
		case '*': resultado = num1*num2; break;
		
		case '/': resultado = num1/num2; break;
		
		case '+': resultado = num1+num2; break;
		
		case '-': resultado = num1-num2; break;
		
		default: printf("\nOperador inválido! \n"); break;
	}
	
	printf("O resultado e: %f", resultado);
	
	return 0;
}
