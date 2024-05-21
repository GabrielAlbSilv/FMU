#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"");
	//arquivos v�lidos: .txt(texto), .dat(bin�rio)
	//o que est� na mem�ria ser� gravado no arquivo
	FILE *arq; //* --> ponteiro --> apontam para uma
	//vari�vel de mem�ria
	
	//comandos de arquivos
	//fopen -- abertura de arquivo
	//fprintf --grava��o de arquivo
	//fclose -- fechamento de arquivo
	//fgets --leitura de arquivo
	
	arq = fopen("arquivo1.txt","w");
	//sintaxe:
	//fopen(arquivo,modo)
	//modo a: "add" == grava��o adicionando
	//modo w: "write" == grava��o sobrescrevendo
	//modo r: "read" = leitura
	//modo a e w --> criam arquivos caso n�o existam
	
	//gravando uma palavra
	fprintf(arq,"%s","texto");
	// quebra de linha fprintf(arq,"\n%s","Aula 1");
	
	printf("\nArquivo gravdo com sucesso!");
	
	//fechando o arquivo aberto
	fclose(arq);
	
	return 0;
}
