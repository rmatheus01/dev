#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, numero;
	
	printf("Digite um  n�mero para tabuada: ");
	scanf("%i",&numero);
	
	printf("Tabuada de multiplica��o do n�mero: 2 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", numero, i, numero*i); 
	}
	
	
	return 0;
}
