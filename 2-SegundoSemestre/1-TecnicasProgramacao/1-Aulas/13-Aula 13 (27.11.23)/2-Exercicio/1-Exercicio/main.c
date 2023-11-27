#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	char contArq[100];
	int vet[10], i=0, vet2[10], ini, test, aux,vet3[i],cont;
	float med=0;
	FILE *arq;
	arq = fopen("resolucao.txt","w");

//---Recebendo números

	for(i=0;i<=9;i++){
		printf("\n Digite um número(x%d): ",i+1);
		scanf("%d",&vet[i]);
	}
	fprintf(arq,"%s","--Números Digitados:");
	for(i=0;i<=9;i++){
		fprintf(arq,"  %d,",vet[i]);
	}
	
//---Ordenando em ordem crescente

	printf("\n Números ordenados: ");
	for(ini=0;ini<9;ini++){
		for(test=ini+1;test<10;test++){
			if(vet[ini]>vet[test]){
				aux=vet[ini];
				vet[ini] = vet[test];
				vet[test]=aux;
			}
		}
	}
	fprintf(arq,"\n%s","--Números Ordenados:");
	for(i=0;i<=9;i++){
		fprintf(arq,"  %d,",vet[i]);
	}
	for(i=0;i<=9;i++){
		printf("\n - %d ",vet[i]);	
	}
	
//---Separando números pares 

	printf("\n Números pares: ");
	fprintf(arq,"\n%s","--Números Pares:");
	for(i=0;i<=9;i++){
		if(vet[i]%2==0){
			vet2[i]=vet[i];
			printf("\n - %d ",vet2[i]);
			
			fprintf(arq,"   %d,",vet2[i]);
		}
	}
	
//---Encontrando a média
	for(i=0;i<=9;i++){
		med = med+vet[i];
	}
	med = med/i;
	printf("\n - Média: %.2f ",med);	
	fprintf(arq,"\n%s","--Média:");
	fprintf(arq," %.2f, ",med);

//---Encontrando números maiores que a média
	printf("\n Números maiores que a média: ");
	fprintf(arq,"\n%s","--Números Maiores que a Média:");
	for(i=0;i<=9;i++){
		if (vet[i] > (med)){
			vet3[i] = vet[i];
			printf("\n - %d ",vet3[i]);
			fprintf(arq," %d,",vet3[i]);
			cont++;
		}
	}
	fclose(arq);
	return 0;
}
