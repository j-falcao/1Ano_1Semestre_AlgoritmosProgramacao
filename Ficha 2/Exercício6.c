#include <stdio.h>

int main(){
	float n1, n2, n3;
	printf("escreva 3 n�meros reais: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	if (n1>n2 && n1>n3){
	printf("%f � o n�mero maior\n", n1);	}
	else if (n2>n1 && n2>n3){
	printf("%f � o n�mero maior\n", n2);	}
	else{
	printf("%f � o n�mero maior\n", n3);	}
	
	return 0;
	
}
