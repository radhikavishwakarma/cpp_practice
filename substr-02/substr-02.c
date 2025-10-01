#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "Hello, india is my country!";
    char substring[] = "india is my country";
    char *result = strstr(text, substring);

    printf("%s", result);

    return 0;

}