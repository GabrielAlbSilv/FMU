#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int vet[10], i=0;
	void imprimeInv(int vet[]);
	setlocale(LC_ALL,"");
	for(i=0;i<=9;i++){
		printf("\nDigite um número: (%d)",i+1);
		scanf("%d",&vet[i]);
	}
	imprimeInv(vet);
	return 0;
}
void imprimeInv(int vet[]){
	int i;
	printf("\nImprimindo inverso: ");
	for(i=9;i>=0;i--){
		printf("\n  %d (%d)",vet[i], i+1);
	}
	return;
}

