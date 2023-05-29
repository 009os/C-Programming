#include<stdio.h>
int main()
{
    int i,n=100000;
    for(i=1;i<=10;i++)
    {
        n=(1.1)*n;
        printf("\nPopulation at the end of %d year is : %d",i,n);
    }
}