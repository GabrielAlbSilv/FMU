#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	system("cls");
	setlocale(LC_ALL,"");
	/*Exemplo 1
	float val1=0;
	printf("\nPor favor insira um n�mero:");
	scanf("%f",&val1);
	printf("\n - %.2f� = %.2f",val1,pow(val1,2));
	printf("\n - %.2f� = %.2f",val1,pow(val1,3));
	printf("\n - Ra�z quadrada de %.2f = %.2f",val1,sqrt(val1));
	printf("\n - Ra�z c�bica de %.2f = %.2f",val1, cbrt(val1));
	return 0;*/
	
	/*Exemplo 2
	float raio=0;
	printf("\nEsse programa calcula a �rea de um c�rculo");
	printf("\nPor favor insira o valor do raio:");
	scanf("%f",&raio);
	printf("A �rea do circulo �: %.2f",3.1415*pow(raio,2));
	*/
	
	//Exemplo 3
	float temp = 0;
	printf("\nEsse programa converte Fahrenheit para Celsius");
	printf("\nPor favor insira a temperatura em Fahrenheit:");
	scanf("%f",&temp);
	printf("%.2f�F � igual a: %.2f�C",temp,((temp-32)*5)/9);
	
}






