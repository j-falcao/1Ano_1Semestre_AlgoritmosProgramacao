#include <stdio.h>

int main(void){
	
	char caracter;
	printf("Digite um caracter: ");
	scanf("%c", &caracter);
	
	if (caracter>=65 && caracter<=90)
	printf("Letra maiuscula");
	
	else if (caracter>=97 && caracter<=122)
	printf("Letra minuscula");
	
	else if(caracter>=48 && caracter<=57)
	printf("Digito");
	
	else if(caracter>=32 && caracter<=47 || caracter>=58 && caracter<=64 || caracter >=91 && caracter<=96 || caracter>=123 && caracter<=126 )
	printf("Caracter de pontuacao");
	
}
