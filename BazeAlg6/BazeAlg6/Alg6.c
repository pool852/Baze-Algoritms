#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h>

int main() {

    setlocale(LC_ALL, "rus");
    int n, k, l, i, j;
    char** name;
    char** list;
    char tmp[64];
    int* ch;
    int* sum;

    printf("Введите количество элементов: \n");
    scanf("%d", &n);
    name = (char**)calloc(n, sizeof(char*));
    list = (char**)calloc(n, sizeof(char*));
    ch = (int*)calloc(n, sizeof(int));

    sum = (int*)calloc(n, sizeof(int));

    for (i = 0; i < n; i++) {

        printf("Название\n");
        scanf("%s", &tmp);
        name[i] = (char*)calloc(strlen(tmp) + 2, sizeof(char));
        strcpy(name[i], tmp);
    }

    k = 0;

    for (i = 0; i < n; i++) {

        l = -1;
        j = 0;

        while (l == -1 && j < k) {

            if (strcmp(name[i], list[j]) == 0) {

                l = j;
            }

            j++;
        }

        if (l == -1) {
            list[k] = (char*)calloc(strlen(name[i]) + 2, sizeof(char));
            strcpy(list[k], name[i]);

            sum[k++] = ch[i];
        }

        else {


            sum[l] += ch[i];
        }
    }

    printf("Список: \n");

    for (i = 0; i < k; i++) {

        printf("Название:%s\n", list[i]);
    }
}