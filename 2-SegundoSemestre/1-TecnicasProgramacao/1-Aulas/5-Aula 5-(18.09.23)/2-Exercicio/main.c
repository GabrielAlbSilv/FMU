#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int valores[5];
	int pInicial, pTeste, aux, i;
	float som;
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
	printf("\nOrdenado em ordem crescente: \n");
	for(i=0; i<6;i++){
		printf("\n %d ", valores[i]);
	}
	
	printf("\nOrdenado em ordem decrescente: \n");
	for(i=5; i>=0;i--){
		printf("\n %d ", valores[i]);
	}
	for(i=0; i<6; i++){
	
		som = valores[i] + som;
	}
	printf("\nSoma: %.2f", som);
	printf("\nMédia: %.2f", som/6);
	printf("\nMenor valor: %d", valores[0]);
	printf("\nMaior valor: %d", valores[5]);
	return 0;
}
