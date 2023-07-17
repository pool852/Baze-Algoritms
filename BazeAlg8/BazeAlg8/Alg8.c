
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int n, k, l, i, j;
	char** name;
	char** list;
	char tmp[64];
	int* ch;
	int* rait;
	int* sum;

	printf("Введите количество элементов:\n");
	scanf("%d", &n);

	ch = (int*)calloc(n, sizeof(int));
	sum = (int*)calloc(n, sizeof(int));
	name = (char**)calloc(n, sizeof(char*));
	list = (char**)calloc(n, sizeof(char*));

	printf("Enter data \n");
	printf("Название\n");
	for (i = 0; i < n; i++)
	{
		scanf("%s %d", &tmp, &ch[i]);

		name[i] = (char*)calloc(strlen(tmp) + 2, sizeof(char));
		strcpy(name[i], tmp);
	}
	k = 0;
	for (i = 0; i < n; i++)
	{
		l = -1;
		j = 0;
		while (l == -1 && j < k)
		{
			if (strcmp(name[i], list[j]) == 0)
			{
				l = j;
			}
			j++;
		}
		if (l == -1)
		{
			list[k] = (char*)calloc(strlen(name[i]) + 2, sizeof(char));
			strcpy(list[k], name[i]);
			sum[k++] = ch[i];
		}
		else
		{
			sum[l] += ch[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		printf("Название:%s\n Сумма:%d\n ", name[i], sum[i]);
	}
}







