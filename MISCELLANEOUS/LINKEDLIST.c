#include <stdio.h>
#include <stdlib.h>

void Insert();
void Print();

struct Company
{
    char Name[50];
    int Revenue;
    struct Company *next;
};

struct Company *list = NULL;

int main()
{
    int emp, choice, i;
    do
    {
        printf("PLEASE ENTER THE NUMBER OF COMPANIES DATA YOU WANT TO ADD : ");
        scanf("%d", &emp);
        printf("\n");

        for (i = 0; i < emp; i++)
        {
            Insert();
        }

        Print();

        printf("\nENTER 1 FOR FURTHER ADDITIONS ELSE PRESS ANY OTHER KEY : ");
        scanf("%d", &choice);
    } while (choice == 1);

    return 0;
}

void Insert()
{
    struct Company *a, *dynamicS;

    dynamicS = (struct Company *)malloc(sizeof(struct Company));

    printf("ENTER THE COMPANY NAME : ");
    scanf("%s", &*dynamicS->Name);
    printf("ENTER (%s) REVENUE : ", dynamicS->Name);
    scanf("%d", &dynamicS->Revenue);
    printf("\n");
    dynamicS->next = NULL;

    if (list == NULL)
    {
        list = dynamicS;
    }

    else
    {
        a = list;
        while (a->next != NULL)
        {
            a = a->next;
        }

        a->next = dynamicS;
    }
}

void Print()
{
    struct Company *a;

    a = list;
    printf("\nTHE COMPANIES DETAILS ARE : \n");

    while (a != NULL)
    {
        printf("THE COMPANY NAME IS : (%s) WITH REVENUE : (%d) \n", a->Name, a->Revenue);
        a = a->next;
    }
}
