#include <stdio.h>
#include <stdbool.h>

int main(void){
	int unidade;
	float valor;
	float valor_convertido;
	bool x = true;

	printf("Pode converter de:\n cm para pol e vice-versa\n Kg para lbs e vice-versa\n l para gal e vice-versa\n C para F e vice-versa\nPara isso basta inserir a unidade que pretende que seja convertida\n");
	printf("Unidades: \n cm..........1\n pol..........2\n Kg..........3\n lbs..........4\n L..........5\n gal..........6\n C..........7\n F..........8\nDigite o numero correspondente a unidade:");
	while(x){
	scanf("%d", &unidade);
	if(unidade<1 || unidade>8){
		x = true;
		printf("ENTRE 1 E 8 INCLUSIVE! : ");
		}
	else
		x = false;
	}
	
	printf("Insira valor a ser convertido:");
	scanf("%f", &valor);
	
	if(unidade == 1){	
		valor_convertido = valor/2.54;
		printf("%f cm equivale a %.3f pol" , valor, valor_convertido);
	}	
	
	if(unidade == 2){	
		valor_convertido = valor*2.54;
		printf("%f pol equivale a %.3f cm" , valor, valor_convertido);
	}	 

	if(unidade == 3){	
		valor_convertido = valor/0.4536;
		printf("%f Kg equivale a %.3f lbs" , valor, valor_convertido);
	}	

	if(unidade == 4){	
		valor_convertido = valor*0.4536;
		printf("%f lbs equivale a %.3f Kg" , valor, valor_convertido);
	}	

	if(unidade == 5){	
		valor_convertido = valor/3.785;
		printf("%f L equivale a %.3f gal" , valor, valor_convertido);
	}	

	if(unidade == 6){	
		valor_convertido = valor*3.785;
		printf("%f gal equivale a %.3f L" , valor, valor_convertido);
	}

	if(unidade == 7){	
		valor_convertido = valor*1.8+32;
		printf("%f C equivale a %.3f F" , valor, valor_convertido);
	}	

	if(unidade == 8){	
		valor_convertido = (valor-32)/1.8;
		printf("%f F equivale a %.3f C" , valor, valor_convertido);
	}	
}
