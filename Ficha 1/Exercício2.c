#include <stdio.h>

int main (void){
	float saldo, preco, troco ;
	int a;
	printf("Saldo: ");
	scanf("%f", &saldo);
	printf("Qual o preço do produto: ");
	scanf("%f", &preco);
	a = saldo/preco;
	troco = saldo-preco*a;
	printf("Consegue comprar %d produtos e sobram-lhe %.2f euros", a, troco);
	return 0;
}
