#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i;
	
	printf("N�meros pares entre 100 e 120 \n");
	for (i = 100; i <= 120; i++) {
		if (i % 2 == 0) {
			printf("%i \n", i);
		}
	}
	
	
	return 0;
}
