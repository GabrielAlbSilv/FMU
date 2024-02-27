#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int val = 1, i;
	char string[100];
	setlocale(LC_ALL,"");
	FILE *arq; 
	arq = fopen("arq.txt","a");

	while(val!=0){
		printf("\nDigite um número: ");
		scanf("%d",&val);
		if(val != 0){
			fprintf(arq,"%d\n",val);
		}
	}
	fclose(arq);
	printf("\nArquivo gravado com sucesso!");
	printf("\nImprimindo os números:");
	arq = fopen("arq.txt","r");
	while (fgets(string,100,arq)){
		printf("\n %s ",string);
	}
	fclose(arq);

	return 0;
}
