#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char contArq[100];
	setlocale(LC_ALL,"");
	FILE *arq; 
	arq = fopen("arquivo5.txt","r");
	if(arq==NULL){
		printf("Arquivo não encontrado!");
		return 0;	
	}
	//utilizando while para ler todos as linhas do arquivo5
	while(fgets(contArq,100,arq)){
		printf("%s",contArq);
	} 
	fclose(arq);
	return 0;
}
