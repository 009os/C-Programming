#include<stdio.h>
int main()
{
    int i,n=4,j;
    int factorial(int n)
    {
    return ((n == 1 || n == 0) ? 1 : n * factorial(n - 1));
    }

    for(i=0;i<=4;i++)
    {
        j=0;
        while(j<=i)
        {
        printf("%d",(24/(factorial(j)*(factorial(4-j)))));
        j++;
        }
        printf("\n");
    }


}
