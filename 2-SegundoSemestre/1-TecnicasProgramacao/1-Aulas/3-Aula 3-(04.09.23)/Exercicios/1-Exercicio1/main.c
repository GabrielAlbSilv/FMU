#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

void mensagem(int horaUso); 
int horaUso;

int main(){
	setlocale(LC_ALL,"");
	printf("\nDigite o horário: ");
	scanf("%d",&horaUso);
	mensagem(horaUso);
	return 0;
}

void mensagem(int horaUso){ 
	
	if(horaUso >= 6 && horaUso <= 12 ){
		printf("\nBom dia!");
		
	}else if(horaUso >= 13 && horaUso <= 18 ){
		printf("\nBoa Tarde!");
	}else{
		printf("\nBoa noite");
	}
	return;
}
