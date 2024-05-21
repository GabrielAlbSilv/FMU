#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int valores[5];
	int pInicial, pTeste, aux, i;
	setlocale(LC_ALL,"");
	for(i=0; i<6;i++){
		printf("\nDigite um número (%d): ", i);
		scanf("%d",&valores[i]);
	}
	 
	//Método bubble sort - ordenando valores em um vetor
	for(pInicial=0;pInicial<5;pInicial++){
		for(pTeste= pInicial+1; pTeste<6; pTeste++){
			if(valores[pInicial]>valores[pTeste]){
			aux=valores[pInicial];
			valores[pInicial] = valores[pTeste];
			valores[pTeste] = aux;
			}
 		}
	}
	return 0;
}
