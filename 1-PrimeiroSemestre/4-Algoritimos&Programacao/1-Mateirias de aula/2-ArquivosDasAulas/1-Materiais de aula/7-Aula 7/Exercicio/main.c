#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	float a,b,c;
	setlocale(LC_ALL,"");
	system ("cls");
	printf("\nEsse programa identifica o tipo de tri�ngulo");
	printf("\nDigite os lados do tri�ngulo:");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		if (a == b && b == c){
			printf("\nEsse tri�ngulo � equil�tero");
			} 
			else if (a==b || c==a || b==c){
				printf("\nEsse tri�ngulo � is�celes");
				}else {
					printf("\nEsse tri�ngulo � escaleno");
				}
	}else{
		printf("\nN�o � tri�ngulo!");
	}
	return 0;
}
