#include <stdio.h>
int main (void){
	int min;
	int horas;
	int minutos;
	printf("Minutos decorridos: ");
	scanf("%d", &min);


	if(min>=60 && min<1440){
	horas = (min/60);
	minutos=min%60;	
	printf("%d:%d  ", horas, minutos);	}

	
}
	
