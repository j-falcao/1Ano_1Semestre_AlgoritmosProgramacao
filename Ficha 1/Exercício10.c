#include <stdio.h>

int main (void){

	int mes;
	int dia;
	int dias_sobra;
	printf("Qual e o mes?: ");
	scanf("%d", &mes);
	printf("Qual é o dia de hoje?:");
	scanf("%d", &dia);
	
	if (mes == 1|| mes ==3 || mes ==5 || mes ==7 || mes ==8 || mes ==10 || mes ==12){
	dias_sobra = 31- dia;
	printf("faltam %d dia(s)", dias_sobra);}
	
	else if(mes == 2){
	dias_sobra =28 - dia;
	printf("faltam %d dia(s)", dias_sobra);}	
	
	else{
	dias_sobra = 30 - dia;
	printf("faltam %d dia(s)", dias_sobra);}	
}
