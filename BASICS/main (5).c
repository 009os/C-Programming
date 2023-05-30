#include <stdlib.h>
#include <stdio.h>

void ATM(long long int lower, long long int upper)
{
    int i, j = 0, c, b[8], a[16], add = 0, add1 = 0, N;
    static int k = 1;
    
        long long int num = (rand() % (upper - lower + 1)) + lower;

        for (i = 0; i < 16; i++)
        {
            N = num % 10;
            a[i] = N;
            num = num / 10;
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

        if ((c % 10 == 0)&&(a[0]!=0))
        {
            printf("\n(%d)  ", k);
            for (i = 0; i < 16; i++)
            {
                printf("%d", a[i]);
            }
            printf("\n");
            k++;
        }

        else
            ATM(lower, upper);
    }

int main()
{
    long long int lower = 1000000000000000, upper = 9999999999999999;
    int atm, i;
    printf("HOW MANY ATM CARD NUMBERS YOU WANT TO GENERATE : ");
    scanf("%d", &atm);
    for (i = 0; i < atm; i++)
    {
        ATM(lower, upper);
    }

    return 0;
}


