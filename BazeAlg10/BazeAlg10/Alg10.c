
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


int string_split_smart(char* str, char* razd, char*** res) {
	char* tmp;
	int len = strlen(str);

	str[len - 1] = ' ';
	str[len] = '\0';

	tmp = (char*)calloc(len + 2, sizeof(char));

	int k = 0;

	strcpy(tmp, "");

	for (int i = 0; i < len; i++) {
		char symb[2] = { str[i], '\0' };
		int l = strcspn(symb, razd);

		if (l > 0) {
			strcat(tmp, symb);
		}
		else {
			if (symb[0] == ' ')
			{
				int tmp_len = strlen(tmp);
				if (tmp_len != 0)
				{
					(*res)[k] = (char*)calloc(tmp_len + 2, sizeof(char));
					strcpy((*res)[k], tmp);
					strcpy(tmp, "");
					k++;
				}
			}
			else {
				int tmp_len = strlen(tmp);
				if (tmp_len != 0) {
					(*res)[k] = (char*)calloc(tmp_len + 2, sizeof(char));
					strcpy((*res)[k], tmp);
					strcpy(tmp, "");
					k++;
				}
				(*res)[k] = (char*)calloc(2, sizeof(char));
				strcpy((*res)[k], symb);
				k++;
			}
		}
	}
	return k;
}

void main()
{

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char data[100];
	char** result;
	char razd[] = ",/.'[]*-+ ";

	printf("¬ведите строку\n");
	fgets(data, 100, stdin);

	int len = strlen(data) + 2;

	result = (char**)calloc(len, sizeof(char*));

	int k = string_split_smart(data, razd, &result);

	for (int i = 0; i < k; i++) {
		printf("[%d] %s\n", i, result[i]);
	}
}
