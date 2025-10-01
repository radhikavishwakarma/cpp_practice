#include <stdio.h>

int main()
{
    char word[] = "notification";
    word[4] = 'p';
    printf("%s", word);

    return 0;
}