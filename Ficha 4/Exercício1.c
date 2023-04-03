#include <stdio.h>
#include <locale.h>

//													ficha 4 exercicio 1

int main() {

int numero;
int i;

printf("Diga um numero \n");
scanf("%d",&numero);


for(i=0; i<=10; i++){
	printf("%td x %d =%d\n",numero,i,numero*i);
	
}


	
}
