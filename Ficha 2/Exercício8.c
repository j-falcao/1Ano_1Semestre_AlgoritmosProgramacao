#include <stdio.h>
#include <math.h>
int main(void){
	float a, b, c, raiz, temp;
	printf("Escreva os valores a, b e c respetivamente: ");
	scanf("%f%f%f", &a, &b, &c);

	raiz = sqrt((pow(b,2))-4*a*c);
	if (raiz>0)
		printf("Existem duas raizes que sao: %f e %f ",(-b + raiz)/2*a, (-b - raiz)/2*a);
	else if(raiz==0){
		if((-b + raiz)/2*a<0)
			temp= (-b - raiz)/2*a;	
		else
			temp = (-b + raiz)/2*a;
	printf("Existe uma raiz que e: %f" ,temp);
					}
	else
	printf("Nao existem raizes");
	
return 0;
	
	
}
