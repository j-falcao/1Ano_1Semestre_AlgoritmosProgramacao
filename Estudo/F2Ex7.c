#include <stdio.h>

int main(void)
{
	int a,b;
	printf("Insira dois digitos: \n");
	scanf("%d%d", &a,&b);

	if(a%b==0)
		printf("%d e multiplo de %d",a,b);
	else if(b%a==0)
		printf("%d e multiplo de %d",b,a);
	else
		printf("Nem %d e multiplo de %d nem %d e multiplo de %d",a,b,b,a);
	
return 0;
}
