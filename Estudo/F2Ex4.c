#include <stdio.h>

int main (void)
{
	int min, horas, minutos;
	
	printf("CONVERSOR DE MINUTOS PARA O FORMATO DE [HORAS]:[MINUTOS]\n");
	printf("Insira minutos: ");
	scanf("%d", &min);
	
	horas = min/60;
	minutos = min%60;
	
	printf("%d:%d", horas, minutos);

}
