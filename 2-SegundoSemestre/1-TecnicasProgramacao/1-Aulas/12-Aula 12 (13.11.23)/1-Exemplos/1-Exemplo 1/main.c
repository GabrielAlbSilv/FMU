#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int i=1;
	setlocale(LC_ALL,"");
	//arquivos válidos: .txt(texto), .dat(binário)
	//o que está na memória será gravado no arquivo
	FILE *arq; /* --> ponteiro --> apontam para uma
	variável de memória*/

	arq = fopen("dados.txt","a");
	//sintaxe:
	//fopen(arquivo,modo)
	//modo a: "add" == gravação adicionando
	//modo w: "write" == gravação sobrescrevendo
	//modo r: "read" = leitura
	//modo a e w --> criam arquivos caso não existam
	
	//gravando uma palavra
	for(i=0;i<=100;i++){
		fprintf(arq,"\n %d",i);
	}
	
	
	printf("\nArquivo gravdo com sucesso!");
	
	//fechando o arquivo aberto
	fclose(arq);
	
	return 0;
}
