#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int mat [4][4];
	//coluna |linha
	int i=0, j=0;
	for(j=0;j<=3;j++){
		for(i=0;i<=4;i++){
			mat[j][i] = j*i;
		}
	}
	printf("\nMatriz: \n");
	for(j=0;j<=3;j++){
		for(i=0;i<=4;i++){

			printf(" %d ", mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}
