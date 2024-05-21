#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	int esc, cont;
	setlocale(LC_ALL,"");
	system("cls");
	printf("\nEsse programa apresenta exercícios de 1-5, digite 99 para encerrar");
	
	while (esc!=99)
	{
		printf("\n \nPor favor escolha um exercício (1-5):");
		scanf("%d",&esc);                                                                                                                                                                                                                                                                                                                  
		 //Exercício 1
		if (esc==1){
		
		 	float raio = 0;
		 	printf("\n  \nExercício 1: Calculo do volume de uma esfera");
		 	printf("\nPor favor insira o valor do raio:");
		 	scanf("%f",&raio);
		 	raio = pow(raio,3);
		 	printf("\nVolume da esfera: %.2f ", (4.0/3.0)*3.14159*raio);
		 	cont++;
		}
		//Exercício 2
		if (esc==2){
			float n1, n2, n3;
			printf("\n \nExercício 2: Calculo da média de uma nota");
			printf("\nPor favor, insira a primeira nota:");
			scanf("%f",&n1);
			printf("\nPor favor, insira a segunda nota:");
			scanf("%f",&n2);
			printf("\nPor favor, insira a terceira nota:");
			scanf("%f",&n3);
			printf("\nNota final: %.2f:", n1*0.2 + n2*0.3 + n3*0.5);
			cont++;
		}
		 //Exercício 3
		if (esc==3){
			cont++;
		}
		 //Exercício 4
		if (esc==4){
			cont++;
		}
		 //Exercício 5
		if (esc==5){
			cont++;
		}
		else{
		printf("\nValor inválido");
		}	
		if(cont >= 8)
		{
			system("cls");
			cont=0;
		}
	}
	printf("\nPrograma encerrado!");
	return 0;
}

