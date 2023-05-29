#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("ENTER A NUMBER TO FIND ITS FACTORIAL : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        fact=fact*(n-i);
    }
    printf("%d",fact);
}