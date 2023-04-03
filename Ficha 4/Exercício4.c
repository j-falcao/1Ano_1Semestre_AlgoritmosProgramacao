#include <stdio.h>
#include <locale.h>

//													ficha 4 exercicio 4

int main()
{

int i, soma,f; 
i = 1;
soma= 0;
f=1;
do 
{
	f=f*i;
	soma = soma+f;
	i++;
}
while(i<6);
printf("o somatorio e %d", soma);

}
