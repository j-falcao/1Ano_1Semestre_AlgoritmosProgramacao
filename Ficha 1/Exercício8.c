#include <stdio.h>
int main(void){
	char operacao;
	float x;
	float y;
	float z;
	printf("escolha a operacao matemetica (+,-,*,/): ");
	scanf("%c", &operacao);
	printf("Insira dois numeros: ");
	scanf("%f%f", &x,&y);
	
	if(operacao == '+'){
	z = x+y;
	printf("%f + %f = %f", x,y,z);}
	else if(operacao == '-'){
	z=x-y;
	printf("%f + %f = %f", x,y,z);}
	else if(operacao == '*'){
	z = x*y;
	printf("%f + %f = %f", x,y,z);}
	else{
	z = x/y;
	printf("%f + %f = %f", x,y,z);}

}






/*
switch(operacao){
	
	case '+': printf("A soma vale %.3f\n", x+y);
		break;
	case'-': printf("a subtracao vale %.3f", x-y);
		break;
	case '*': printf("A multiplicacao vale %.3f", x*y);
		break;
	case '/': if(y!=0)
		printf("A divisao vakle %.3f", x/y);
			else
				printf("nao se pode dividir por 0");
		break;
	default:printf("operador invalido");
		break;			
}}*/
