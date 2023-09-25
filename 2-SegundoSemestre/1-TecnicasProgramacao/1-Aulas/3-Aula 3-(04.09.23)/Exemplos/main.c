#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//declarando a função
void mensagem(); 

int main(){
	int i =0;
	setlocale(LC_ALL,"");
	
	//chamando a função
	//mensagem();
	
	/*for(i =0; i<=3; i++){
		mensagem();
	}*/
	
	return;
}

void mensagem(){ 
	//corpo da função
	printf("\nOlá mundo");
}


