#include <stdio.h>

int main (void){
	float x, y, z;
	printf("X: ");
		scanf("%f", &x);
	printf("Y: ");
		scanf("%f", &y);
	printf("Z: ");
		scanf("%f", &z);
		
	if(x>y && x>z)
	printf("X e o maior");
	else if (y>x && y>z)
	printf("Y e o maior");
	else 
	printf("Z e o maior");
	return 0;
}

