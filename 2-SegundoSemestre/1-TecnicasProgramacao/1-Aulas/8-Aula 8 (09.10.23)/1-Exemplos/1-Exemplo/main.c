#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"");
	int mat [3][4];
	//coluna |linha
	int i, j;
	
	for(j=0;j<=2;j++){
		for(i=0;i<=3;i++){
			
			printf("\nInforme um número: ");
			scanf("%d",&mat[j][i]);
		}
	}
	for(j=0;j<=2;j++){
		for(i=0;i<=3;i++){
			
			printf(" %d " , mat[j][i]);
		
		}
		printf("\n");
	}
	return 0;
}
