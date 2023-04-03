#include <stdio.h>
int main (void){
	int min;
	int horas;
	int minutos;
	printf("Minutos decorridos: ");
	scanf("%d", &min);
	horas = (min/60);
	minutos=min%60;	

	if(min>=720 && min<1440)
	printf("%d:%d p.m. ", horas, minutos);
	else
	printf("%d:%d a.m. ", horas, minutos);	
	
}
	
