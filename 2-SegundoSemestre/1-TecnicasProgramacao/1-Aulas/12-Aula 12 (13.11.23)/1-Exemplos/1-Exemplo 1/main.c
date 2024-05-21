#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int i=1;
	setlocale(LC_ALL,"");
	//arquivos v�lidos: .txt(texto), .dat(bin�rio)
	//o que est� na mem�ria ser� gravado no arquivo
	FILE *arq; /* --> ponteiro --> apontam para uma
	vari�vel de mem�ria*/

	arq = fopen("dados.txt","a");
	//sintaxe:
	//fopen(arquivo,modo)
	//modo a: "add" == grava��o adicionando
	//modo w: "write" == grava��o sobrescrevendo
	//modo r: "read" = leitura
	//modo a e w --> criam arquivos caso n�o existam
	
	//gravando uma palavra
	for(i=0;i<=100;i++){
		fprintf(arq,"\n %d",i);
	}
	
	
	printf("\nArquivo gravdo com sucesso!");
	
	//fechando o arquivo aberto
	fclose(arq);
	
	return 0;
}
