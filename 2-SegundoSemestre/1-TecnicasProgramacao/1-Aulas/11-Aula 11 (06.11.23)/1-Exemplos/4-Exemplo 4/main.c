#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char conteudoArquivo[100];
	setlocale(LC_ALL,"");
	FILE *arq; 
	//abrir arquivo para leitura
	arq = fopen("arquivo4.txt","r");
	
	//comando de leitura - pegando cont�udo do arquivo4 
	//e alocando na vari�vel conteudoArquivo
	fgets(conteudoArquivo,100,arq);
	
	
	//imprimindo conte�do da vari�vel
	printf("S�lario lido: %s",conteudoArquivo);
	
	fclose(arq);
	return 0;
}
