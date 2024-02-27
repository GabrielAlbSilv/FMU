#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>


int main() {
 	int v[12]={26,65,45,73,10,18,78,93,70,49,23,22};
    int aux, pi, pt;  //variáveis para ordenar
    int v1[5],v2[6],i;
  	setlocale(LC_ALL,"");
    //ordenando o vetor v
    for (pi=0;pi<11;pi++)
    {
        for (pt=pi+1;pt<=11;pt++)
        {
            if (v[pi]>v[pt])
            {
                aux=v[pi];
                v[pi]=v[pt];
                v[pt]=aux;
            }
        }
    }
    //aux será usado como i
    printf("Vetor v: ");
    for (aux=0;aux<=11;aux++)
    {
         printf("%d-",v[aux]);
    }
    
    printf("\n\nValor que está no meio (ignorado): %d",v[5]);
    //carregando o vetor v1
    i=0;
    for (aux=0; aux<5; aux++)
    {
        v1[i]=v[aux];
        i++;
    }
    //carregando o vetor v2
    i=0;
    for (aux=6; aux<=11; aux++)
    {
        v2[i]=v[aux];
        i++;
    }
   
    //imprimindo os vetores v1,v2
    //aux será usado como i
    printf("\n\nVetor v1: ");
    for (aux=0;aux<=5;aux++)
    {
         printf("%d-",v1[aux]);
    }
    //imprimindo os vetores v1,v2
    printf("\n\nVetor v2: ");
    for (i=0;i<=5;i++)
    {
        printf("%d-",v2[i]);
    }
	return 0;
}
