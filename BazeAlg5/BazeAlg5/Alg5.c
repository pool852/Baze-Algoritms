#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char** name;
	int N;
	int i, len;
	int mid, fin, start;
	char* ctrl;
	char tmp[255];
	rsize_t ll;
	int l;
	printf("Введите значение:\n");
	scanf("%d", &N);
	name = (char**)calloc(4 * N, sizeof(char*));
	printf("Введите список\n");
	for (i = 0; i < N; i++)
	{
		scanf("\n");
		fgets(tmp, 255, stdin);
		len = strlen(tmp) + 2;
		ll = sizeof(rsize_t);
		name[i] = (char*)calloc(ll * len, sizeof(char));
		strcpy_s(name[i], ll * len, tmp);
	}
	printf("Введите искомое число\n");
	scanf("\n");
	fgets(tmp, 255, stdin); 

	len = strlen(tmp) + 2;
	ctrl = (char*)calloc( ll * len, sizeof(char));
	strcpy_s(ctrl, ll * len, tmp);
	l = -1;
	start = 0;
	fin = N - 1;
	while (l == -1 && start <= fin)
	{
		mid = (start + fin) / 2;
		len = strcmp(ctrl, name[mid]);
		if (len > 0)
		{
			start = mid + 1;
		}
		if (len < 0)
		{
			fin = mid - 1;
		}
		if (len == 0)
		{
			l = mid;
		}
	}
	printf("Нашли искомое под номером %d\n", l);
}
