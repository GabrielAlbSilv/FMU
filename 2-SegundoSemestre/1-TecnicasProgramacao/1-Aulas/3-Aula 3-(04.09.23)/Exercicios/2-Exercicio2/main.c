#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1, n2, med;
float media(float nota1, float nota2);

int main(){
	printf("\nDigite a nota 1: ");
	scanf("%f",&n1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&n2);
	med = media(n1,n2); //enviando n1 e n2 para a função, med recebendo o resultado
	printf("\n %1.f", med);
	return 0;
}
float media(float nota1, float nota2){ // nota1 e nota2 recebendo n1 e n2
	return (nota1+nota2)/2; 
}
