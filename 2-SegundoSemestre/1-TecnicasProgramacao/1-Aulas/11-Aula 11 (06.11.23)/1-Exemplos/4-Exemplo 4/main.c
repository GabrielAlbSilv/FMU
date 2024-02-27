#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char conteudoArquivo[100];
	setlocale(LC_ALL,"");
	FILE *arq; 
	//abrir arquivo para leitura
	arq = fopen("arquivo4.txt","r");
	
	//comando de leitura - pegando contéudo do arquivo4 
	//e alocando na variável conteudoArquivo
	fgets(conteudoArquivo,100,arq);
	
	
	//imprimindo conteúdo da variável
	printf("Sálario lido: %s",conteudoArquivo);
	
	fclose(arq);
	return 0;
}
