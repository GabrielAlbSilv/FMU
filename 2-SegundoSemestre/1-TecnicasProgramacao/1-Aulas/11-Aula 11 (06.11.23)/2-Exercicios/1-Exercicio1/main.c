#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int val = 1;
	setlocale(LC_ALL,"");
	FILE *arq; 
	arq = fopen("arq.txt","a");

	while(val!=0){
		printf("\nDigite um número: ");
		scanf("%d",&val);
		fprintf(arq,"\n%d",val);
	}
	printf("\nArquivo gravdo com sucesso!");
	fclose(arq);
	
	return 0;
}
