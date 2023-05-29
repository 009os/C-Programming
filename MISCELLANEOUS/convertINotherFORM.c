#include <stdio.h>
#include <stdlib.h>

void toOctal(int);
void toBinary(int);
void toHexa(int);
int main()
{
    int num, choice, condition = 1;

    while (condition)
    {

        printf("Enter choice: ");

        printf("Enter 1 to convert the input in Binary\n");
        printf("Enter 2 to convert the input in Octal\n");
        printf("Enter 3 to convert the input in Hexadecimal\n");
        printf("Enter 0 to Exit\n");
        printf("\nYour Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            condition = 0;
            exit(0);

        case 1:
            printf("Enter value: ");
            scanf("%d", &num);
            toBinary(num);
            break;

        case 2:
            printf("Enter value: ");
            scanf("%d", &num);
            toOctal(num);
            break;

        case 3:
            printf("Enter value: ");
            scanf("%d", &num);
            toHexa(num);
            break;

        default:
            printf("Wrong Input Try again\n");
        }
    }

    // toBinary(num);
    toOctal(num);
}

void toOctal(int num)
{
    int arr[5], n = 0, i = 0;
    printf("Octal Form: ");
    while (num != 0)
    {
        arr[i] = num % 8;
        i++;
        n++;
        num /= 8;
    }
    for (int i = n - 1; i >= 0; i--)
        printf("%d", arr[i]);

    printf("\n\n");
}

void toBinary(int num)
{
    printf("Binary Form: ");
    while (num != 0)
    {
        printf("%d", num % 2);
        num = num / 2;
    }
    printf("0");
    printf("\n\n");
}

void toHexa(int num)
{
    int arr[30];
    int i = 0, n = 0;

    while (num != 0)
    {
        if (num % 16 < 10)
        {
            arr[i++] = num % 16;
            n++;
            num = num / 16;
        }
        else
        {
            switch (num % 16)
            {
            case 10:
                arr[i++] = 65;
                n++;
                num = num / 16;
                break;

            case 11:
                arr[i++] = 66;
                num = num / 16;
                n++;
                break;

            case 12:
                arr[i++] = 67;
                n++;
                num = num / 16;
                break;

            case 13:
                arr[i++] = 68;
                n++;
                num = num / 16;
                break;

            case 14:
                arr[i++] = 69;
                n++;
                num = num / 16;
                break;

            case 15:
                arr[i++] = 70;
                n++;
                num = num / 16;
                break;
            }
        }
    }
    printf("Hexadecimal form: ");
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < 10)
            printf("%d", arr[i]);
        else
            printf("%c", arr[i]);
    }
    printf("\n\n");
}