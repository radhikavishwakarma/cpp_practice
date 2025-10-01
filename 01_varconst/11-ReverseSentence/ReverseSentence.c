#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];

    printf("Sentence: ");
    // scanf("%s", &sentence);
    fgets(sentence, 100, stdin);

    for (int i = strlen(sentence); i >= 0; i--)
    
    {
        printf("%c", sentence[i]);
    }
    

    return 0;
}