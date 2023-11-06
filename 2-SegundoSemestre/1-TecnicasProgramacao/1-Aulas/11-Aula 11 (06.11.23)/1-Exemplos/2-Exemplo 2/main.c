#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#

int main() {
	int val = 0;
	setlocale(LC_ALL,"");
	FILE *arq; 
	arq = fopen("arquivo2.txt","a");

	for(val=1;val<=100;val++){
		fprintf(arq,"\n%d",val);
	}
	printf("\nArquivo gravdo com sucesso!");
	fclose(arq);
	
	return 0;
}
