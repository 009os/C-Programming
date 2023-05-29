#include <stdio.h>
int main()
{
    int i, j = 0, c, b[8], a[16], add = 0, add1 = 0;

    printf("Enter a DEBIT-CARD number : ");
    for (int i = 0; i < 16; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 16; i++)
    {
        if (i % 2 != 0)
        {
            add = add + a[i];
            continue;
        }

        else
            b[j] = a[i] * 2;
        j++;
    }

    for (j = 0; j < 8; j++)
    {
        if (b[j] >= 10)
            b[j] = b[j] - 9;
    }

    for (j = 0; j < 8; j++)
    {
        add1 = add1 + b[j];
    }

    c = add1 + add;

    if (c % 10 == 0)
        printf("THE Credit Card number is VALID .");
    else
        printf("YOU CREDIT CARD IS EXPIRED PLEASE REAPPLY FOR THAT .");
}