#include <stdio.h>

void bubbleSortDecrescente(int vetor[], int n);

int main() {

    int vetor[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    bubbleSortDecrescente(vetor, n);

    printf("Vetor ordenado em forma decrescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void bubbleSortDecrescente(int vetor[], int n) {

    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}
