#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int i=0;
	int vet[10], pares[10], j=0, maior=1, menor=999;
	float media;
	int somaValores=0, pInicial, pTeste, aux, totMaiorMedia=0;
	void imprimeVetor(int vet[]);
	FILE *arq;
	
	for(i=0;i<10;i++){
		printf("\nDigite um número: ");
		scanf("%d",&vet[i]);
		if(vet[i]%2==0){
			pares[j]=vet[i];
			j++;
		}
		if(vet[i]>maior){
			maior=vet[i];
		}
		if(vet[i]<menor){
			menor=vet[i];
		}
		somaValores+=vet[i];
	}
	for(pInicial=0;pInicial<9;pInicial++){
		for(pTeste= pInicial+1; pTeste<10; pTeste++){
			if(vet[pInicial]>vet[pTeste]){
			aux=vet[pInicial];
			vet[pInicial] = vet[pTeste];
			vet[pTeste] = aux;
			}
 		}
	}
	media=somaValores/10;
	for(i=0;i<10;i++){
		if(vet[i]>media){
			totMaiorMedia++;
		}
	}
	imprimeVetor(vet);
	arq = fopen("arquivorevisao.txt","w");
	fprintf(arq,"-Maior valor: %d  ",maior);
	fprintf(arq,"\n-Menor valor: %d  ",menor);
	fprintf(arq,"\n-Média: %.2f  ",media);
	fprintf(arq,"\n-Números maiores que a média: %d",totMaiorMedia);
	fclose(arq);
	return 0;
}

void imprimeVetor(int vet[]){
	int i = 0;
	for(i=0; i<10;i++){
		printf("\n %d",vet[i]);
	}
}
