#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int opcao=0;
	system("cls");
	setlocale(LC_ALL,"");
	/*printf("\nEsse programa oferece tr�s op��es de bebidas");
	printf("\nOp��es: \n -1: �gua \n -2: Suco \n -3: Refrigerante \nEscolha: ");
	scanf("%d",&opcao);
	if (opcao == 1){
		printf("\n O item escolhido foi: �GUA");
	}
		else if (opcao == 2){
			printf("\n O item escolhido foi: SUCO ");
		}
		else if (opcao == 3){
			printf("\n O item escolhido foi: REFRIGERANTE");
		}
	else{
		printf("\n N�MERO INV�LIDO");
	}*/
	
	/*float med;
	printf("\nEsse programa verifica a aprova��o de um aluno");
	printf("\nInsira a m�dia do(a) aluno(a): ");
	scanf("%f",&med);
	if (med >= 7){
		printf("\nAluno(a): APROVADO");
	}else if (med >= 3 && med <= 6){
		printf("\nAluno(a): EM RECUPERA��O");
	}else{
		printf("\nAlunod(a): REPROVADO");
	}*/
	
	/*int i; 
	for(i=0; i<=10;i++){
		printf("\n %d", i);
	}
	*/
	
	/*int cont=1;
	while(cont <=10){
		printf("\n %d",cont);
		cont++;

	}*/
	
	
	int vet[5], i, soma=0;
	for(i=0;i<5;i++){
		printf("\nQual %do valor? \n",i+1);
		scanf("%d",&vet[i]);
		soma=soma+vet[i];
	}
	printf("\nA soma vale: %d",soma);
	
	return 0;
}




