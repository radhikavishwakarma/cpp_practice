#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

char items[MAX_ITEMS][50] = {"Mango", "Orange", "Apple"};
int itemCount = 3;

// Function declarations
void addItem();
void deleteItem();
void showItem();
void searchItems();

int main(void)
{
    int choice;

    while (1)
    {
        printf("---------------------------------------------\n");
        printf("1. Add Item\n");
        printf("2. Delete Item\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("----------------------------------------------\n");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Add Item
                printf("Adding Item\n");
                addItem();
                showItem();
                break;
            case 2:
                // Delete Item
                printf("Deleting Item\n");
                deleteItem();
                showItem();
                break;
            case 3:
                // Search Result
                searchItems();
                break;
            case 4:
                // Exit
                exit(0);
                break;
            
            default:
                printf("Invalid Input Please Try Again\n");
                break;
        }
    }

    return 0;
}

void addItem()
{
    if (itemCount >= MAX_ITEMS)
    {
        printf("List is full cant add more\n");
        return;
    }

    char newItem[50];
    printf("Enter item name: \n");
    scanf("%s", &newItem);
    strcpy(items[itemCount], newItem);
    // itemCount = itemCount + 1;
    itemCount++; // it is same as above line
}

void deleteItem()
{
    if (itemCount == 0)
    {
        printf("List is empty! nothing to delete\n");
        return;
    }
    
    int deleteChoice;
    showItem();
    printf("Enter item number to delete: \n");
    scanf("%d", &deleteChoice);
    if (deleteChoice < 1 || deleteChoice > itemCount)
    {
        printf("Invalid choice\n");
        return;
    }
    // Shift items 
    for (int i = deleteChoice - 1; i < itemCount - 1; i++)
    {
        strcpy(items[i], items[i + 1]);
    }
    itemCount--;
}

void showItem()
{
    printf("-------------------List of Items------------------\n");
    if (itemCount == 0)
    {
        printf("No items in list\n");
    }
    else
    {
        for (int i = 0; i < itemCount; i++)
        {
            printf("%d. %s\n", i + 1, items[i]);
        }   
    }
}

void searchItems()
{
    if (itemCount == 0)
    {
        printf("List is empty! nothing to search\n");
        return;
    }

    char searchItem[50];
    int count = 0;
    printf("Enter search item name: \n");
    scanf("%s", &searchItem);
    printf("-----------------------------------------\n");

    // Linear search
    for (int i = 0; i < itemCount; i++)
    {
        if (strcmp(searchItem, items[i]) == 0)
        {
            printf("%d. %s\n", i + 1, items[i]);
            count++;
        }
    }  
    printf("-------------------------------------------\n"); 
    printf("%d %s found\n", count, searchItem);   
}