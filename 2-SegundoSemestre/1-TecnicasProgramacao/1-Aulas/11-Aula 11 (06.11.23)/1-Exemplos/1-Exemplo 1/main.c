#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"");
	//arquivos válidos: .txt(texto), .dat(binário)
	//o que está na memória será gravado no arquivo
	FILE *arq; //* --> ponteiro --> apontam ára uma
	//variável de memória
	
	//comandos de arquivos
	//fopen -- abertura de arquivo
	//fprintf --gravação de arquivo
	//fclose -- fechamento de arquivo
	//fgets --leitura de arquivo
	
	
	arq== fopen("arquivo1.txt","a");
	//sintaxe:
	//fopen(arquivo,modo)
	//modo a: "add" == gravação adicionando
	//modo w: "write" == gravação sobrescrevendo
	//modo r: "read" = leitura
	//modo a e w --> criam arquivos caso não existam
	
	fclose(arq);
	
	return 0;
}
