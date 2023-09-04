#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1, n2, med;
float maior(float nota1, float nota2);

int main(){
	printf("\nDigite a nota 1: ");
	scanf("%f",&n1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&n2);
	med = maior(n1,n2); //enviando n1 e n2 para a função, med recebendo o resultado
	printf("\nMaior nota: %1.f", med);
	return 0;
}
float maior(float nota1, float nota2){ //nota 1 e nota 2 recebendo n1 e n1 
	if(nota1 > nota2){
		return nota1;
	}else{
		return nota2;
	}
}
