#include <stdio.h>

int main() {
	
	int numeros[5]; // Declara um array de 5 inteiros
	numeros[0] = 10;
	numeros[1] = 20;
	numeros[2] = 30;
	numeros[3] = 40;
	numeros[4] = 50;
	
	printf("O terceiro elemento e: %d\n\n", numeros[2]);
	
	int numeros2[] = {10, 20, 30, 40, 50}; // O compilador determina o tamnho automaticamente

	printf("O quinto elemento e: %d\n", numeros2[4]);
	
	return 0;
}