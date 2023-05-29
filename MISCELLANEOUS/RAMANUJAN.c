#include <stdio.h>
#include <math.h>
int main()
{

    int i, lim, x, y, count = 0;
    lim = pow(20, 3);
    // printf("lim=%d\n",lim);

    // a loop for iterating between 1-8000
    for (i = 1; i < lim; i++)
    {
        count = 0;
        for (x = 1; pow(x, 3) < i; x++)
        {
            for (y = x; pow(x, 3) + pow(y, 3) <= i; y++)
            {
                if (pow(x, 3) + pow(y, 3) == i)
                {
                    count++;
                    if (count == 2)
                    {
                        printf("%d\n", i);
                        printf("%d and %d\n", x, y);
                        int flag = 0;
                        int temp1 = 1, temp2 = y, sum = i;
                        while (flag == 0)
                        {
                            if (pow(temp1, 3) + pow(temp2, 3) == sum)
                            {
                                printf("%d and %d\n", temp1, temp2);
                                flag = 1;
                            }
                            else if (pow(temp1, 3) + pow(temp2, 3) < sum)
                            {
                                temp2++;
                                continue;
                            }
                            else if (pow(temp1, 3) + pow(temp2, 3) > sum)
                            {
                                if (temp1 > 0 && temp2 > 0)
                                {
                                    temp1--;
                                    temp2--;
                                }
                            }
                        }
                    }
                }
            }
        }
        // if(count==1)
        // printf("%d \n",i);
        if (count == 2)
        {
            // printf("%d %d = ",x,y);
            printf("%d\n", i);
        }
    }
}