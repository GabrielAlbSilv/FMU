#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#

int main() {
	int i=0;
	char string [100];
	setlocale(LC_ALL,"");
	FILE *arq1; 
	arq1 = fopen("arquivo1.txt","r");
	fgets(string,100,arq1);
	printf("Palavra original: %s",string);
	fclose(arq1);
	
	FILE *arq2; 
	arq2 = fopen("arquivo2.txt","w");
	for(i=0;i<=100;i++){
		if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O'|| string[i] == 'U'){
			string[i] = '*';
		}
	}
	printf("\nPalavra nova: %s",string);
	fprintf(arq2,"%s",string);
	fclose(arq2);
	return 0;
}
