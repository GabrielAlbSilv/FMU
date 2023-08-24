#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
int main() {
	system("cls");
	setlocale(LC_ALL,"");
	/*int i=0;
	float val, acum=0, acum2=0; 
	for (i=0; i<3;i++){
		printf("\nPor favor, insira um valor: ");
		scanf("%f",&val);
		acum += val;
		if (val < 50){
			acum2 += val;
		}
	}
	printf("\nSoma dos valores menores que 50: %.2f", acum2);
	printf("\nMédia de todos os valores: %.2f", acum/i);
	*/
	/*int i=0;
	float val, acum=0, acum2=0; 
	while (i<3){
		printf("\nPor favor, insira um valor: ");
		scanf("%f",&val);
		acum += val;
		if (val < 50){
			acum2 += val;
		}
		i++;
	}
	printf("\nSoma dos valores menores que 50: %.2f", acum2);
	printf("\nMédia de todos os valores: %.2f", acum/i);*/
	
	int idad, i=0, cont=0;
	float acum=0;
	while(i<4){
		printf("\nPor favor, insira sua idade: ");
		scanf("%d",&idad);
		if(idad >= 18){
			acum += idad;
			cont++;
		}
		i++;
	}
	printf("\nMaiores de idade: %d", cont);
	printf("\nMédia dos maiores de idade: %.2f", acum/cont);
	printf("\nSoma dos maiores de idade: %.0f", acum);
	return 0;
}
