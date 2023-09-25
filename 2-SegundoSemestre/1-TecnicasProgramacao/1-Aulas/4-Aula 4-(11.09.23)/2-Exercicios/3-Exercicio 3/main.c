#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void op (float val);

int main() {
	setlocale(LC_ALL,"");
	float val1;
	printf("\nDigite o valor de um quadrado: ");
	scanf("%f",&val1);
	op(val1);
	return 0;
}

void op (float val){
	printf("\n Área do quadrado: %.2f", val*val);
	return;
}
