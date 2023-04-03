#include <stdio.h>
#include <locale.h>

//													ficha 4 exercicio 2

int main() {

int i;
int j;
char enter;
for(i=2; i<=10; i++)
{
	for(j=0;j<=10; j++)
	printf("%d x %d =%d\n",i,j, i*j);
	scanf("%c", &enter);	
}
}
