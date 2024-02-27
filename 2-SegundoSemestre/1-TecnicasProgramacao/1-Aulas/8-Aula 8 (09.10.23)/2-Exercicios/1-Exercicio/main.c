#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int mat [5][5];
	//coluna |linha
	int i=0, j=0;
	for(j=0;j<=4;j++){
		for(i=0;i<5;i++){
			if(j==i){
				mat[j][i]=1;
			}else{
				mat[j][i]=0;
			}
		}
	}
	printf("\nMatriz: \n");
	for(j=0;j<=4;j++){
		for(i=0;i<=5;i++){

			printf(" %d ", mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}
