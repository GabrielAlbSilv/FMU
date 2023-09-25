#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int vet[10], i, aux, ini, test;
	void imprimeInv(int vet[]);
	int maiorVal(int vet[]);
	int menorVal(int vet[]);
	setlocale(LC_ALL,"");
	for(i=0;i<=9;i++){
		printf("\nDigite um número: (%d): ",i+1);
		scanf("%d",&vet[i]);
	}
	for(ini=0;ini<9;ini++){
		for(test= ini+1; test<10; test++){
			if(vet[ini]>vet[test]){
			aux=vet[ini];
			vet[ini] = vet[test];
			vet[test] = aux;
			}
 		}
	}
	printf("\n \nOrdenando:");
	for(i=0;i<=9;i++){
		printf(" %d",vet[i]);
	}
	imprimeInv(vet);
	printf("\nMaior valor: %d", maiorVal(vet));
	printf("\nMaior valor: %d", menorVal(vet));
	return 0;
}
void imprimeInv(int vet[]){
	int i;
	printf("\nImprimindo inverso: ");
	for(i=9;i>=0;i--){
		printf(" %d ",vet[i]);
	}
	return;
}
int maiorVal(int vet[]){
	return vet[9];
}
int menorVal(int vet[]){
	return vet[0];
}

