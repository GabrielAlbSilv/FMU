#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float op (float aux1, float aux2);
float soma, dif, prod;

int main() {
	setlocale(LC_ALL,"");
	float val1, val2,res;
	printf("\nDigite dois número: ");
	scanf("%f%f",&val1,&val2);
	res = op(val1,val2);
	printf("\nSoma: %.1f", soma);
	printf("\nDiferença: %.1f", dif);
	printf("\nProduto: %.1f", prod);
	return 0;
}

float op (float aux1, float aux2){
	soma = aux1+aux2;
	dif = aux1-aux2;
	prod = aux1*aux2;
	return soma, dif, prod;
}
