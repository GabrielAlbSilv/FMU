#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int mat [3][3];
	int mat2[3][3];
	//coluna |linha
	int i=0, j=0;
	for(j=0;j<=2;j++){
		for(i=0;i<=3;i++){
			printf("\nInforme um valor: ");
			scanf("%d",&mat[j][i]);
		}
	}
	printf("\nMatriz: \n");
	for(j=0;j<=2;j++){
		for(i=0;i<=3;i++){

			printf(" %d ", mat[j][i]);
		}
		printf("\n");
	}
	
	printf("\nMatriz transposta: \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			mat2[j][i] = mat[i][j];
			

			printf(" %d ", mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
