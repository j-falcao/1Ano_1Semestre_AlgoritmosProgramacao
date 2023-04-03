#include <stdio.h>

int main (void)
{
	int min, horas, minutos;
	
	printf("CONVERSOR DE MINUTOS PARA O FORMATO DE [HORAS]:[MINUTOS]\n\n\n");
	printf("Insira minutos: ");
	scanf("%d", &min);
	
	if(min>=0||min<=1440)
	{
		if(min>=720)
		{
		min-=720;
		horas = min/60;
		minutos = min%60;
		printf("%d:%d p.m.", horas, minutos);
		}
		else
		{
		horas = min/60;
		minutos = min%60;
		printf("%d:%d a.m.", horas, minutos);
		}
	}
	else 
	printf("O minutos devem estar entre o e 1440! ");
}
