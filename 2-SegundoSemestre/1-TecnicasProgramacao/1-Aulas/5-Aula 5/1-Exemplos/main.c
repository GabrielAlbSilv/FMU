#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int valores[5];
	int pInicial, pTeste, aux, i;
	setlocale(LC_ALL,"");
	for(i=0; i<5;i++){
		printf("\nDigite um número (%d): ", i);
		scanf("%d",&valores[i]);
	}
	 
	//Método bubble sort
	
	for(pInicial=0;pInicial<4;pInicial++){
		for(pTeste= pInicial+1; pTeste<5; pTeste++){
			if(valores[pInicial]>valores[pTeste]){
			aux=valores[pInicial];
			valores[pInicial] = valores[pTeste];
			valores[pTeste] = aux;
			}
 		}
	}
	printf("\nOrdenando: ");
	for(i=0; i<5;i++){
		printf("\n %d ", valores[i]);

	}
	return 0;
}
