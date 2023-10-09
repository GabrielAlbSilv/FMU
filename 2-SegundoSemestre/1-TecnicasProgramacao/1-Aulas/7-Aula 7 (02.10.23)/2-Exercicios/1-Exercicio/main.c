#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>


int main() {
	int v[11]={26, 65, 45, 73, 10, 18, 78, 93, 70, 49, 23, 22};
	int v1[5], v2[5], i;
	int aux,pi,pt, ini, fim, meio;
	setlocale(LC_ALL,"");
	
	for(pi=0;pi<11;pi++){
		for(pt = pi+1; pt<=11; pt++){
			if(v[pi]>v[pt]){
				aux=v[pi];
				v[pi]=v[pt];
				v[pt]=aux;
			}
		}
	}
	printf("\nVetor v:  ");
	for(aux=0;aux<=11;aux++){
		printf(" %d ",v[aux]);
	}
	i=0;
	for(aux=0;aux<5;aux++){
		v1[i]=v[aux];
		i++;
	}
	i=0;
	for(aux=6;aux<=11;aux++){
		v2[i]=v[aux];
		i++;
	}
	
	printf("\nVetor v1: ");
	for(i=0;i<=5;i++){
		printf(" %d ",v1[i]);
	}
	
	printf("\nVetor v2: ");
	for(i=0;i<=5;i++){
		printf(" %d ",v2[i]);
	}
	
	return 0;
}
