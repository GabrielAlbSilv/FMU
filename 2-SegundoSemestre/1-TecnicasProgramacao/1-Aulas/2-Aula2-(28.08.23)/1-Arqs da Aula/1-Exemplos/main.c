#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	/*char letras[15]={'a','b','c','d'};
	printf("%s",letras);*/
	
	/*char str[10];
	printf("Insira uma string: ");
	fgets(str,20,stdin); //fgets = captura caracteres inseridos
	printf("\nString inserida:  %s", str);*/
	
	/*char str[10];
	printf("Insira uma string: ");
	fgets(str,20,stdin); //fgets = captura caracteres inseridos
	printf(str,stdout); //fputs = exibe uma string */
	
	char v1[5];
	char v2[5];
	int i;
	printf("Insira uma string: ");
	fgets(v1,5,stdin);
	for(i=0; i<=4; i++){
		v1[i] = toupper(v1[i]); //toupper = muda caracteres para maiúsculo
	}
	strcpy(v2,v1); //strcpy = copia o conteúdo de uma string
	fputs(v2,stdout);
	return 0;
}
