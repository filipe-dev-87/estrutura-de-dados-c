#include <stdio.h>

void bubbleSort(int vetor[], int n);

int main() {

	int vetor[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(vetor) / sizeof(vetor[0]);

	bubbleSort(vetor, n);

	printf("Vetor ordenado: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", vetor[i]);
	}

	return (0);
}

void bubbleSort(int vetor[], int n) {

	int temp;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (vetor[j] > vetor[j + 1]) {
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}
}
