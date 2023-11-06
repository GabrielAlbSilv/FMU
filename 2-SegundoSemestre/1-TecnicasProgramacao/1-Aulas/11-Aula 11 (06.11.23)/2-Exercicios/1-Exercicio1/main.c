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
		if(val == 0){
			fclose(arq);
			return 0;
		}
		fprintf(arq,"%d\n",val);
	}
	printf("\nArquivo gravado com sucesso!");
	fclose(arq);
	return 0;
}
