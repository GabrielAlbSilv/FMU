#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int opcao=0;
	system("cls");
	setlocale(LC_ALL,"");
	/*printf("\nEsse programa oferece três opções de bebidas");
	printf("\nOpções: \n -1: Água \n -2: Suco \n -3: Refrigerante \nEscolha: ");
	scanf("%d",&opcao);
	if (opcao == 1){
		printf("\n O item escolhido foi: ÁGUA");
	}
		else if (opcao == 2){
			printf("\n O item escolhido foi: SUCO ");
		}
		else if (opcao == 3){
			printf("\n O item escolhido foi: REFRIGERANTE");
		}
	else{
		printf("\n NÚMERO INVÁLIDO");
	}*/
	
	/*float med;
	printf("\nEsse programa verifica a aprovação de um aluno");
	printf("\nInsira a média do(a) aluno(a): ");
	scanf("%f",&med);
	if (med >= 7){
		printf("\nAluno(a): APROVADO");
	}else if (med >= 3 && med <= 6){
		printf("\nAluno(a): EM RECUPERAÇÃO");
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




