#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	
	/*1.Criando uma lista com 5 elementos. Crie um programa que pe�a ao usu�rio que
	digite 5 elementos de um vetor de n�meros inteiros a ser criado e imprima-a ao final do
	programa.
	
	int vet[5], i=0;
	printf("\nDigite n�meros inteiros");
	for (i=0; i<5; i++){
		printf("\n %d � n�mero:", i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nN�meros inseridos: ");
	for(i=0;i<5;i++){
		printf(" %d ",vet[i]);
	}*/
	
	/*2. Criando uma lista de ordem n. Crie um programa que pe�a ao usu�rio que digite o
	tamanho do vetor a ser criado, colete os dados (n�meros inteiros) e imprima-a ao final
	do programa.
	
	int i=0, x, vet[i];
	printf("\nDefina o tamanho do vetor:");
	scanf("%d",&x);
	for (i=0; i<x; i++){
		printf("\n %d � n�mero:", i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nN�meros inseridos: ");
	for(i=0;i<x;i++){
		printf(" %d ",vet[i]);
	}
	*/
	
	/*3. Ordem reversa. Crie um programa que pe�a ao usu�rio que digite um vetor com 6
	elementos e imprima cada elemento em ordem reversa
	
	int vet[6], vet2[6], i=0;
	printf("\nDigite n�meros inteiros");
	for (i=0; i<6; i++){
		printf("\n %d � n�mero:", i+1);
		scanf("%d",&vet[i]);
		
	}
	for (i=0;i<6;i++){
			vet2[i] = vet[5-i];
	}
	printf("\nN�meros inseridos: ");
	for(i=0;i<6;i++){
		printf(" %d ",vet2[i]);
	}*/
	
	/*4. Ordem reversa II. Crie um programa que pe�a ao usu�rio que digite um vetor com 6
	elementos e gere um novo vetor que armazena os elementos na ordem reversa.
	Imprima as duas listas ao final.
	
	int vet[6], vet2[6], i=0;
	printf("\nDigite n�meros inteiros");
	for (i=0; i<6; i++){
		printf("\n %d � n�mero:", i+1);
		scanf("%d",&vet[i]);
		
	}
	for (i=0;i<6;i++){
			vet2[i] = vet[5-i];
	}
	printf("\nN�meros inseridos: ");
	for(i=0;i<6;i++){
		printf(" %d ",vet[i]);
	}
	printf("\nN�meros ao contr�rio: ");
	for(i=0;i<6;i++){
		printf(" %d ",vet2[i]);
	}*/
	
	/*5. Pares e �mpares. Crie um programa que pe�a ao usu�rio que digite o tamanho do vetor
	a ser criado, colete os dados (n�meros inteiros positivos) e imprima ao final uma lista
	com os n�meros pares e outra com os n�meros �mpares.
	*/
    int i = 0, x = 0;
    printf("\nDefina o tamanho do vetor: ");
    scanf("%d", &x);
    int vet[x]; 
    for (i=0;i<x;i++) {
        printf("\n %d � n�mero: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nN�meros pares: ");
    for (i=0;i<x;i++) {
        if (vet[i] % 2 == 0) {
            printf(" %d ", vet[i]);
        }
    }
    printf("\nN�meros �mpares: ");
    for (i=0;i<x;i++) {
        if (vet[i] % 2 != 0) {
            printf(" %d ", vet[i]);
        }
    }
    return 0;
}
