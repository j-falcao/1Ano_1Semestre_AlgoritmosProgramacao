#include <stdio.h>

int main(void){
	int figura;
	float x;
	float y;
	float r;
	float area;
	float perimetro;
	printf("1 para retangulo\n2 para circulo\n3 para quadrado\nEscolha uma opcao: ");
	scanf("%d", &figura);
	switch(figura){
	
	case 1:
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);	
		area = x*y;
		perimetro = 2*x+2*y;
		printf("o perimetro e %.3f e a area e %.3f", perimetro, area);
		
	case 2:
		printf("r: ");
		scanf("%f", &r);	
		area = 3.14*r;
		perimetro = 2*3.14*r;
		printf("o perimetro e %.3f e a area e %.3f", perimetro, area);
	case 3:
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);	
		area = x*y;
		perimetro = 2*x+2*y;
		printf("o perimetro e %.3f e a area e %.3f", perimetro, area);
}}

