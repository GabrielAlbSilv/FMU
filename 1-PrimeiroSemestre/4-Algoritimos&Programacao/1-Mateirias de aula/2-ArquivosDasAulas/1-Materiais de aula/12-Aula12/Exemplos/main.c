#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

int main() {
	system("cls");
	setlocale(LC_ALL,"");
	/*
	int i, conta=0, contr=0;
	float n1, n2, med;
	for(i=0;i<5;i++){
		printf("\n\nInsira as notas do %dº aluno:",i+1);
		scanf("%f%f",&n1,&n2);
		if(n1 >= 0 && n1 <=10 && n2 >= 0 && n2 <= 10 ){
			med = (n1+n2)/2;
			printf("\nA média do %dº aluno é: %.2f",i+1,med);
			if(med>=6){
				conta++;
			}else{
				contr++;
				}
		}else{
			printf("\nNota inválida, tente novamente!\n");
			i--;
		}
}
	printf("\n \nO total de alunos APROVADOS foi: %d alunos",conta);
	printf("\nO toal de alunos REPROVADOS foi: %d alunos",contr);
	*/
	int i;
	for(i=10; i>=1; i--){
		printf("\n %d",i);
	}
	return 0;
}
