#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int v[10], i, aux, pi, pt,num, ini, meio, fim;
	char achou='f';
	setlocale(LC_ALL,"");
	for(i=0; i<10;i++){
		
		printf("Digite um valor: (x%d) \n",i+1);
		scanf("%d",&v[i]);
	}
	//ordenando em ordem crescente -bubble sort
	for(pi=0;pi<9;pi++){
		for(pt=pi+1;pt<10;pt++){
			if(v[pi]>v[pt]){
				aux=v[pi];
				v[pi]=v[pt];
				v[pt]=aux;	
			}
		}
	}
	for(i=0;ini<10;i++){
		printf(" %d", v[i]);
	}
	printf("\nDigite um número para ser encontrado: ");
	scanf("%d",&num);

	//Pesquisa binária
	ini=0;
	fim=9;
	meio=(ini+fim)/2;
	printf("\nMeio: %d \n \n",v[meio]);
	for(i=ini;ini<meio;i++){
		printf("Vetor 1: %d", v[i]);
	}
		meio=(ini+fim)/2;
	for(i=meio+1;ini<fim;i++){
		printf(" %d", v[i]);
	}
	
	return 0;
}
