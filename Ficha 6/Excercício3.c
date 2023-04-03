#include <stdio.h>
#define MAX 11

char *concatenacao(char *str1, char *str2);

int main (void)
{	
	int i;
	char str1[MAX], str2[MAX];
	printf("Insira uma palavra: ");
	scanf("%s", str1);
	printf("Insira outra palavra: ");
	scanf("%s", str2);
	
	char *resultado = concatenacao(str1,str2);  
	for(i=0;i<sizeof(str1);i++)
	{
		printf("%c",*(resultado+i));
	} 
}

char *concatenacao(char *str1, char *str2)
{
	int soma = 0, soma2 = 0, i;
	
	for(i=0;i<MAX;i++)
	{
		soma += 1;
		if(*(str1+i)=='\0')
		break;
	}
		for(i=0;i<MAX;i++)
	{
		soma2 += 1;
		if(str2[i]=='\0')
		break;
	}
		for(i=0;i<=soma+soma2-1;i++)
	{
		str1[soma+i] = *(str2+i);
	
	}
	
return str1;
	
	
}
