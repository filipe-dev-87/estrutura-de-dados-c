#include <stdio.h>

void bubbleSortFlagOtimizacao(int vetor[], int n);

int main() {

	int vetor[] = {5, 1, 4, 2, 8};
	int n = sizeof(vetor) / sizeof(vetor[0]);

	bubbleSortFlagOtimizacao(vetor, n);

	printf("Vetor ordenado: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", vetor[i]);
	}

	return 0;
}

void bubbleSortFlagOtimizacao(int vetor[], int n) {

	int temp;
	int trocou;

	for (int i = 0; i < n - 1; i++) {
		trocou = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (vetor[j] > vetor[j + 1]) {
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
				trocou = 1;
			}
		}

		if (!trocou) break;
	}
}
