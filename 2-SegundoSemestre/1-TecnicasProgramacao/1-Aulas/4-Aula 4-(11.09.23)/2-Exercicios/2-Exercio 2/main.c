#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void genero(char gen);

int main() {
	setlocale(LC_ALL,"");
	char esc;
	printf("\nOp��es de g�nero: \n \n -M = Masculino \n -F = Femino \n -N = N�o informar");
	printf("\n \nDigite seu g�nero: ");
	scanf("%c",&esc);
	genero(esc);
	return 0;
}
void genero(char gen){
	if (gen == 'F' || gen == 'f'){
		printf("\nFemino");
	}else if(gen == 'M' || gen == 'm'){
		printf("\nMasculino");
	}else if (gen == 'N' || gen == 'n'){
		printf("\nN�o informado");
	}else{
		printf("\nEntrada inv�lida");
	}
	return;
}
