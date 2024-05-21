#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	system("cls");
	setlocale(LC_ALL,"");
	/*Exemplo 1
	float val1=0;
	printf("\nPor favor insira um número:");
	scanf("%f",&val1);
	printf("\n - %.2f² = %.2f",val1,pow(val1,2));
	printf("\n - %.2f³ = %.2f",val1,pow(val1,3));
	printf("\n - Raíz quadrada de %.2f = %.2f",val1,sqrt(val1));
	printf("\n - Raíz cúbica de %.2f = %.2f",val1, cbrt(val1));
	return 0;*/
	
	/*Exemplo 2
	float raio=0;
	printf("\nEsse programa calcula a área de um círculo");
	printf("\nPor favor insira o valor do raio:");
	scanf("%f",&raio);
	printf("A área do circulo é: %.2f",3.1415*pow(raio,2));
	*/
	
	//Exemplo 3
	float temp = 0;
	printf("\nEsse programa converte Fahrenheit para Celsius");
	printf("\nPor favor insira a temperatura em Fahrenheit:");
	scanf("%f",&temp);
	printf("%.2fºF é igual a: %.2fºC",temp,((temp-32)*5)/9);
	
}






