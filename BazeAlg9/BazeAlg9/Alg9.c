#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>



int string_split(char* str, char* razd, char*** res) {

	strcat(str, " ");
	int k = 0;
	while (strlen(str) > 0) {
		int l = strcspn(str, razd);
		if (l > 0) {
			(*res)[k] = (char*)calloc(l + 2, sizeof(char));
			strncpy((*res)[k], str, l);
			k++;
		}
		int len = strlen(str);
		for (int i = 0; i < len - l + 1; i++) {
			str[i] = str[l + i + 1];
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

	printf("¬ведите строку\n");
	fgets(data, 100, stdin);

	int len = strlen(data) + 2;

	result = (char**)calloc(len, sizeof(char*));

	int k = string_split(data, " ", &result);

	for (int i = 0; i < k; i++) {
		printf("[%d] %s\n", i, result[i]);
	}
}
