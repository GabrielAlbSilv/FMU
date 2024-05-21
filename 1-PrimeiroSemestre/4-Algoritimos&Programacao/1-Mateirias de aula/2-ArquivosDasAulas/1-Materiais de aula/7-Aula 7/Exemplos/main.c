#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	int val1;
	float val2, val3;
	setlocale(LC_ALL,"");
	system ("cls");
	
	//Exemplo 1
	/*
	printf ("\nEsse programa verifica se um número está entre 5 e 100");
	printf("\nPor favor digite um número:");
	scanf("%d",&val1);
	if (val1>=5 && val1<=100){
		printf("\nO número %d está entre 5 e 100", val1);
	}else{
			printf("\nO número %d não está entre 5 e 100", val1);
	}
	*/
	
	//Exemplo 2
	/*
	printf ("\nEsse programa verifica se o aluno foi aprovado");
	printf("\nPor favor digite a média do aluno:");
	scanf("%f",&val2);
	printf("\nPor favor digite a frequência do aluno:");
	scanf("%f",&val3);
	if (val2 >= 6.0 && val3 >= 75){
		printf("\nO aluno foi aprovado!");
		printf("\n -Média: %.2f \n -Frequência: %.2f", val2, val3);
	}else{
		printf("\nO aluno foi reprovado!");
		printf("\n -Média: %.2f \n -Frequência: %.2f", val2, val3);
	}
	*/
	
	//Exemplo 3
	int idad;
	float ano;
	printf("\nEsse programa verifica se alguém pode se aposentar");
	printf("\nDigite a sua idade:");
	scanf("%d",&idad);
	printf("\nDigite os anos de trabalho:");
	scanf("%f",&ano);
	if (idad >= 65 || ano >= 30 || (idad>=60 && ano>=25)){
		printf("\nVocê já pode se aposentar!");
		printf("\n-Idade: %d anos \n-Tempo de contribuição: %.2f anos", idad, ano);
	}else{
		printf("\nVocê não pode se aposentar!");
		printf("\n-Idade: %d anos \n-Tempo de contribuição: %.2f anos", idad, ano);
	}
	return 0;  
}
             
