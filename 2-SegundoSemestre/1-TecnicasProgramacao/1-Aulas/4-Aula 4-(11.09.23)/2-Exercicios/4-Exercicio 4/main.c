#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float op (float aux1, float aux2);
float val1, val2, res;

int main() {
	setlocale(LC_ALL,"");
	printf("\nDigite um n�mero: ");
	scanf("%d",&val1);
	printf("\nDigite um n�mero: ");
	scanf("%d",&val2);
	res = op(val1,val2);
	printf("\n Raz�o: %.0f", res);
	return 0;
}

float op (float aux1, float aux2){
	if (aux1 == 0 || aux2 == 0){
		printf("\nImposs�vel dividir por zero");
		return res = 0;
	}else{
		return aux1/aux2;
	}
	return;
}

