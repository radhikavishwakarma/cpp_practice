#include <stdio.h>
int main(void)
{
    int number1;
    int number2;
    char choice;

    printf("Enter the number: ");
    scanf("%d", &number1);
    printf("Enter the number: ");
    scanf("%d", &number2);

    while (1)
    {
        printf("--------------------------\n");
        printf("press 'a' for addition \n");
        printf("press 's' for substraction \n");
        printf("press 'm' for multiplication \n");
        printf("press 'd' for division \n");
        printf("press 'r' for remainder \n");
        printf("press 'e' for exit \n");
        
        printf("--------------------------\n");
        printf("Enter the operation: ");
        scanf(" %c", &choice);

        if((choice != 'a') && (choice != 's') && (choice != 'm') && (choice != 'd') && (choice != 'r') && (choice != 'e'))
        {
            printf("Invalid input!!!!!\n");
        }
        if ((choice == 'a') || (choice == 'A'))
        {
            printf("addition is: %d\n", number1 + number2);
            printf("--------------------------\n");
        }
        else if((choice == 's') || (choice == 'S'))
        {
            printf("subtraction is: %d\n", number1 - number2);
            printf("--------------------------\n");
        }
        else if((choice == 'm') || (choice == 'M'))
        {
            printf("product is: %d\n", number1 * number2);
            printf("--------------------------\n");
        }
        else if((choice == 'd') || (choice == 'D'))
        {
            printf("quotient is: %.3f\n", (float)number1 / (float)number2);
            printf("--------------------------\n");
        }
        else if((choice == 'r') || (choice == 'R'))
        {
            printf("remainder is: %d\n", number1 / number2);
            printf("--------------------------\n");
        }
        else if((choice == 'e') || (choice == 'E'))
        {
            break;
        }   
    }
        
    return 0;
}