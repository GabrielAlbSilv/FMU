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

//---Recebendo n�meros

	for(i=0;i<=9;i++){
		printf("\n Digite um n�mero(x%d): ",i+1);
		scanf("%d",&vet[i]);
	}
	fprintf(arq,"%s","--N�meros Digitados:");
	for(i=0;i<=9;i++){
		fprintf(arq,"  %d,",vet[i]);
	}
	
//---Ordenando em ordem crescente

	printf("\n N�meros ordenados: ");
	for(ini=0;ini<9;ini++){
		for(test=ini+1;test<10;test++){
			if(vet[ini]>vet[test]){
				aux=vet[ini];
				vet[ini] = vet[test];
				vet[test]=aux;
			}
		}
	}
	fprintf(arq,"\n%s","--N�meros Ordenados:");
	for(i=0;i<=9;i++){
		fprintf(arq,"  %d,",vet[i]);
	}
	for(i=0;i<=9;i++){
		printf("\n - %d ",vet[i]);	
	}
	
//---Separando n�meros pares 

	printf("\n N�meros pares: ");
	fprintf(arq,"\n%s","--N�meros Pares:");
	for(i=0;i<=9;i++){
		if(vet[i]%2==0){
			vet2[i]=vet[i];
			printf("\n - %d ",vet2[i]);
			
			fprintf(arq,"   %d,",vet2[i]);
		}
	}
	
//---Encontrando a m�dia
	for(i=0;i<=9;i++){
		med = med+vet[i];
	}
	med = med/i;
	printf("\n - M�dia: %.2f ",med);	
	fprintf(arq,"\n%s","--M�dia:");
	fprintf(arq," %.2f, ",med);

//---Encontrando n�meros maiores que a m�dia
	printf("\n N�meros maiores que a m�dia: ");
	fprintf(arq,"\n%s","--N�meros Maiores que a M�dia:");
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
