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
	printf("\nDigite um número para ser encontrado: ");
	scanf("%d",&num);
	
	//Pesquisa binária
	ini=0;
	fim=9;
	while (ini <= fim && achou == 'f'){
		
		meio=(ini+fim)/2;
		if(v[meio]==num){
			
			achou ='v';
		}
		if(v[meio]>num){
			fim=meio-1;
		}
		if(v[meio]<num){
			ini=meio+1;
		}
	
	}
	if(achou=='v'){
		printf("\nO número %d foi encontrado na posição %d", num, meio);
	}else{
		printf("\nO número: %d não foi encontrado",num);
	}
	return 0;
}
