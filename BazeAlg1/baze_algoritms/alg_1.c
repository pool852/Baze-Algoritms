#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
	int N;
	int sum;
	int i;
	int* a;
	setlocale(LC_ALL, "rus");
	printf("������� ���-�� �����");
	scanf_s("%d", &N);
	a = (int*)calloc(N, sizeof(int));
	printf("������� �����: ");
	for (i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
	}
	sum = 0;
	for (i = 0; i < N; i++) {
		sum += a[i];
	}
	printf("����� ����� ����� %d", sum);
	return 0;
}
