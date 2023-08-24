#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	float a,b,c;
	setlocale(LC_ALL,"");
	system ("cls");
	printf("\nEsse programa identifica o tipo de triângulo");
	printf("\nDigite os lados do triângulo:");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		if (a == b && b == c){
			printf("\nEsse triângulo é equilátero");
			} 
			else if (a==b || c==a || b==c){
				printf("\nEsse triângulo é isóceles");
				}else {
					printf("\nEsse triângulo é escaleno");
				}
	}else{
		printf("\nNão é triângulo!");
	}
	return 0;
}
