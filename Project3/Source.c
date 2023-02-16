#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <Windows.h>
#include <locale.h>


char inColumn() {

    char text[100];
    puts("Enter your text:");
    gets(text);

    char* punct = { " " };
    char* ptr = strtok(text, punct);
    int i = 0;

    printf("\ncutted words:\n\n");
    while (ptr != NULL)
    {
        printf("%s \n", ptr);

        ptr = strtok(NULL, punct);

        int length = (sizeof(text) / sizeof(text[0])) + 1;
        int length2 = (sizeof(ptr) / sizeof(ptr[0])) + 1;
        for (int i = 0; i < length; i++) {
            if (ptr == punct) {
                for (int j = 0; j < length2; j++) {
                    if (ptr[length2 - 1] == punct) {
                        printf("%s \n", ptr);
                    }
                }
            }
        }

    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    inColumn();
}