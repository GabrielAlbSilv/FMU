#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void vazio();

int main() {
	setlocale(LC_ALL,"");
	vazio();
	return 0;
}
void vazio(){
	printf(" ");
	return;
}
