#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

int main() {
	system("cls");
	setlocale(LC_ALL,"");
	int i=0;
	float alt, acum=0; //sempre iniciar a variável acumladora 
	for (i=0; i<30;i++){
		printf("\nPor favor, insira a sua altura: ");
		scanf("%f",&alt);
		acum = acum + alt; //acumalador somando todos os valores inseridos
	}
	printf("\nA média de altura é: %.2f", acum/i);
	return 0;
}
