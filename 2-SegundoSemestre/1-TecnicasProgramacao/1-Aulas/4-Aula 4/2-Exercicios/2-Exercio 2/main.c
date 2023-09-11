#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char genero(char gen);
char esc, res;

int main() {
	setlocale(LC_ALL,"");
	printf("\nOpções de gênero: \n \n -M = Masculino \n -F = Femino \n -N = Não informar");
	printf("\n \nDigite seu gênero: ");
	scanf("%c",&esc);
	res = genero(esc);
	return 0;
}
char genero(char gen){
	if (gen == 'F' || gen == 'f'){
		printf("\nFemino");
	}else if(gen == 'M' || gen == 'm'){
		printf("\nMasculino");
	}else if (gen == 'N' || gen == 'n'){
		printf("\nNão informado");
	}else{
		printf("\nEntrada inválida");
	}
	return;
}
