#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//declarando a fun��o
void mensagem(); 

int main(){
	int i =0;
	setlocale(LC_ALL,"");
	
	//chamando a fun��o
	//mensagem();
	
	/*for(i =0; i<=3; i++){
		mensagem();
	}*/
	
	return;
}

void mensagem(){ 
	//corpo da fun��o
	printf("\nOl� mundo");
}


