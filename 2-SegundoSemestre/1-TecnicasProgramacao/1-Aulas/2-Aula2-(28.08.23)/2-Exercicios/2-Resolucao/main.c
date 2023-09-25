#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	//1) Faça um programa que leia uma string e a imprima na tela.

	/*char str[20];
	printf("Digite uma frase: ");
	fgets(str,20,stdin);
	fputs(str,stdout);*/
	
	//2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
	/*
	char v1[5];
	int i;
	printf("Insira uma string: ");
	fgets(v1,5,stdin);
	for(i=0; i<=4; i++){
		printf("%c",v1[i]);; 
	}*/
	
	/*3) Sem usar a função strlen(0). faça um programa que leia uma string e 
	imprima quantos caracteres ela possui.*/
	/*
	char str[10];
	int cont = 0, i=0;
	printf("Digite uma frase: ");
	fgets(str,10,stdin);
	for(i=0; i <=10; i++){
		str[i];
		if(str[i] == '\0'){
			cont++;
		}else{
			cont --;
			break;
		}
	}
	printf("\n %d",cont);*/
	
	//4) Faça um programa que leia uma string e a imprima de trás para a frente.
	/*
	char str[20];
	int i;
	printf("Digite uma frase: ");
	fgets(str,20,stdin);
	for(i=20; i>=0; i--){
		printf("%c",str[i]);; 
	}*/
	return 0;
}
