#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>



int main() {

    char** Name;
    char* ctrl;
    char tmp[255];
    int N, i, l, len;


    setlocale(LC_ALL, "Rus");

    printf("Введите кол-во N: ");
    scanf_s("%d", &N);

    Name = (char**)calloc(4 * N, sizeof(char*));
    printf("Введи список:\n");

    for (i = 0; i < N; i++) {

        scanf_s("\n");
        fgets(tmp, 255, stdin);
        len = strlen(tmp) + 2;
        l = sizeof(rsize_t);
        Name[i] = (char*)calloc(len, sizeof(char));

        strcpy(Name[i], tmp);
    }
    printf("Введите искомое слово: ");
    scanf_s("\n");
    fgets(tmp, 255, stdin);

    len = strlen(tmp) + 2;
    l = sizeof(rsize_t);
    ctrl = (char*)calloc(len, sizeof(char));

    strcpy(ctrl, tmp);

    l = -1;
    i = 0;
    while (l == -1 && i < N) {
        if (strcmp(Name[i], ctrl) == 0) {
            l = i;
        }
        i++;
    }
    printf("Номер элемента: %d", l);
}
