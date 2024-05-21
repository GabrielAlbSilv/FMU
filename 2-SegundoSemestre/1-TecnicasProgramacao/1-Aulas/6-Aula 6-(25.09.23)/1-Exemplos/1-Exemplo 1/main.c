#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int vet[10], i, val;
	char acho = 'f';
	
	for(i=0; i<10;i++){
		printf("\nDigite um número(%d): ",i);
		scanf("%d",&vet[i]);
	}
	printf("\n \nDigite o valor a ser encontrado: ");
	scanf("%d",&val);
	
	i = 0;
	while(i<=9 && acho == 'f'){
		if(vet[i]==val){
			acho = 'v';
			printf("\nO número %d está na posição: %d", val, i);
		}else{
			acho = 'f';
		}
		i++;
	}
	if ( acho == 'f'){
		printf("\nO número %d não foi encontrado", val);
	}
	return 0;
}
