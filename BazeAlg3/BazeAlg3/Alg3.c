#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int N, k, i, len;
    char** name;
    char** best;
    char* tmp;

    setlocale(LC_ALL, "Rus");

    printf("Введите кол-во N: ");
    scanf("%d", &N);

    name = (char**)calloc(4 * N, sizeof(char*));
    best = (char**)calloc(4 * N, sizeof(char*));
    tmp = (char*)calloc(64, sizeof(char));

    printf("Введи список\n");


    for (i = 0; i < N; i++) {
        scanf("%s", tmp);
        len = strlen(tmp) + 2;
        name[i] = (char*)calloc(len, sizeof(char));
        strcpy(name[i], tmp);
    }

    k = 0;

    for (i = 0; i < N; i++) {
        if (name[i][0] == 'A') {
            len = strlen(name[i]);
            best[k] = (char*)calloc(len, sizeof(char));
            strcpy(best[k], name[i]);
            k += 1;
        }
    }

    printf("Список хороших:\n");

    for (i = 0; i < k; i++) {
        printf("%s\n", best[i]);
    }


    return 0;
}
 