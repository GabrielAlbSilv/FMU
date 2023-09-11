#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float op (float val);
float val1, res;

int main() {
	setlocale(LC_ALL,"");
	printf("\nDigite o valor de um quadrado: ");
	scanf("%f",&val1);
	res = op(val1);
	printf("\n Área do quadrado: %.2f", res);
	return 0;
}

float op (float val){
	return pow(val,2);
}
