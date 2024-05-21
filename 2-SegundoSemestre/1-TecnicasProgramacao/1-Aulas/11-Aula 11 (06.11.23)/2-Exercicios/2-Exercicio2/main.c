#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char contArq[100];
	int cont = 0;
	setlocale(LC_ALL,"");
	FILE *arq; 
	arq = fopen("arq.txt","r");
	while(fgets(contArq,100,arq)){
		cont++;
	}
	printf("Total de linhas: %d",cont);
	return 0;
}
