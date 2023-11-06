#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"");
	FILE *arq; 
	arq = fopen("arquivo3.txt","a");
	fprintf(arq, "%s", "R$500.00,00");
	return 0;
}
