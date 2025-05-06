#include <stdio.h>

int main() {
	
	int vetor[10] = {1, 2, 3, 4, 5}; // Vetor com 5 elementos
	int n = 5; // Tamanho atual
	int pos = 2; // Posição onde o novo valor será inserido
	int novo_valor = 99;
	int i;
	
	printf("Vetor antes da insercao:\n");
		for(i = 0; i < n; i++) {
		printf("%d\n", vetor[i]);
	}
	
	if(n < 10 && pos >= 0 && pos <= n) {
		for(i = n; i > pos; i--) {
			vetor[i] = vetor[i-1];
		}
		
		vetor[pos] = novo_valor;
		n++;
			
		printf("Vetor apos insercao:\n");
		for(i = 0; i < n; i++) {
			printf("%d\n", vetor[i]);
		}
	} else {
		printf("Nao e possivel inserir: vetor cheio ou posicao invalida.\n");
	}
		
	return 0;
}