#include <stdio.h>

int main (void)
{
	int dia, mes, diasrestantes;
	
	printf("Estamos em que mes? \nEx.: 1--->janeiro:\n ");
	scanf("%d", &mes);
	printf("Estamos em que dia? ");
	scanf("%d", &dia);
	
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
	diasrestantes = 31-dia;
	else if(mes==4 || mes==6 || mes==9 ||mes==11)
	diasrestantes = 30-dia;
	else
	diasrestantes = 28-dia;
	
	printf("Faltam %d dias para o final do mes", diasrestantes);
	
	return 0;
	
}
