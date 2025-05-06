#include <stdio.h>

int main() {
	
	int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	int i;
	
	for(i = 0; i < 10; i++) {
		printf("Posicao %d: %d\n", i, numeros[i]);
	}
	
	return 0;
}