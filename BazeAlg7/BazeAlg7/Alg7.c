
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int spisok_bez_povtoreniy_rate(char** name, int n, char*** list, int** rate) {
	int k = 0;

	for (int i = 0; i < n; i++) {

		int l = -1;
		int j = 0;
		while (l == -1 && j < k)
		{
			if (strcmp(name[i], (*list)[j]) == 0)
			{
				l = j;
			}
			j++;
		}
		if (l == -1)
		{
			(*list)[k] = (char*)calloc(strlen(name[i]) + 2, sizeof(char));
			strcpy((*list)[k], name[i]);
			(*rate)[k] = 1;
			k++;
		}
		else {
			(*rate)[l] += 1;
		}
	}
	return k;
}



void main()
{
	char tmp[255];
	char** name;
	char** list;
	int* Rate;
	int N;

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	printf("Введите количество элементов\n");
	scanf("%d", &N);

	name = (char**)calloc(N, sizeof(char*));
	list = (char**)calloc(N, sizeof(char*));
	Rate = (int*)calloc(N, sizeof(int));

	for (int i = 0; i < N; i++) {
		scanf("%s", &tmp);
		int len = strlen(tmp);
		name[i] = (char*)calloc(len + 2, sizeof(char));
		strcpy(name[i], tmp);
	}

	int k = spisok_bez_povtoreniy_rate(name, N, &list, &Rate);

	printf("Список без повторений и подсчет рейтинга\n");
	for (int i = 0; i < k; i++) {
		printf("[%d] = %s Его рейтинг %d\n", i, list[i], Rate[i]);
	}
}
