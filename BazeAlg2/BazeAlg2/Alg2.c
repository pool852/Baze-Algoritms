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
	printf("������� ���-�� ����� > 0: ");
	scanf_s("%d", &N);
	A = (int*)calloc(4 * N, sizeof(int));
	printf("������� ����� ");
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
	printf("����������� ����� = %d \n ��� ����� � ������� %d \n", min, l);
	return 0;
}
