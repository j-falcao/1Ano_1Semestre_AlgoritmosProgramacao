#include <stdio.h>

int main (void){

	//Exercício
	float altura,base, area;
	printf("Altura: ");
	scanf("%f", &altura);
	printf("Comptimento da Base: ");
	scanf("%f" , &base);
	area = (altura * base)/2;
	
	printf("Area do triangulo =%f\n" , area);
	
	//OU PODEMOS CALCULAR A AREA NO ATO DO PRINTF
	
	printf("Area do triangulo = %f\n", (altura*base)/2);
	
	return 0;
}
