#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, numero;
	
	printf("Digite um  número para tabuada: ");
	scanf("%i",&numero);
	
	printf("Tabuada de multiplicação do número: 2 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", numero, i, numero*i); 
	}
	
	
	return 0;
}
