#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int* A;
	int N;
	int l;
	int i;
	int min;
	setlocale(LC_ALL, "rus");
	printf("Введите кол-во чисел > 0: ");
	scanf_s("%d", &N);
	A = (int*)calloc(4 * N, sizeof(int));
	printf("Введите число ");
	for (i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}
	min = A[0];
	l = 0;
	for (i = 0; i < N; i++) {
		if (A[i] < min) {
			min = A[i];
			l = i;

		}
	}
	printf("Минимальное число = %d \n Его номер в массиве %d \n", min, l);
	return 0;
}
