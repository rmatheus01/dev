#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i;
	
	printf("N�mero impares entre 1 e 20 \n");
	for (i = 1; i <= 20; i++) {
		if (i % 2 == 0) {
			printf("%i \n", i);
		}
	}
	
	
	return 0;
}
