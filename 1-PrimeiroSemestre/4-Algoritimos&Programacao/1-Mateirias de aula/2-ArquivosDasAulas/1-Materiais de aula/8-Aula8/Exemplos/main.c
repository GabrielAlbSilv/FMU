#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	float val[1];
	setlocale(LC_ALL,"");
	system ("cls");
	
	//Exemplo 1
	/*
	printf("\Esse programa recebe dois número e indica qual deles é o maior");
	printf("\nDigite esse dois números:");
	scanf("%f%f",&val[0],&val[1]);
	if (val[0] != val[1]){
		if (val[0] > val[1]){
			printf("\nO número: %.2f é o maior", val[0]);
			printf("\nNúmeros recebidos: %.2f e %.2f", val[0],val[1]);
		}else{
			printf("\nO número: %.2f é o maior", val[1]);
			printf("\nNúmeros recebidos: %.2f e %.2f", val[0],val[1]);
		}
	}else{
			printf("\nOs números são iguais!");
			printf("\nNúmeros recebidos: %.2f e %.2f", val[0],val[1]);
	}
	*/
	//Exemplo 2
	float val2;
	int val1;
	printf("\nEsse programa oferece dois tipos de investimeno bancário");
	printf("\n 1- Poupança \n 2- Fundo de renda fixa \nEscolha o tipo de investimeno: ");
	scanf("%d",&val1);
	if (val1 == 1 || val1 ==2){
		if(val1==1){
			printf("\n--Poupança--");
			printf("\nPor favor insira o valor a ser investido: ");
			scanf("%f",&val2);
			printf("\nO rendimento mensal será: %.2f",val2+(val2*0.03));
		}else{
			printf("\n--Fundo de renda fixa--");
			printf("\nPor favor insira o valor a ser investido: ");
			scanf("%f",&val2);
			printf("\nO retorno mensal será: %.2f",val2+(val2*0.04));
		}
		
	}else {
		printf("\nTipo inválido");
	}
	return 0;
}

