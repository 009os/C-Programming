#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("PRINT THE NUMBER UPTO WHICH YOU WANT A FIBONACCI SERIES :");
    scanf("%d",&n);

    printf("%d\t %d\t",a,b);
    for(i=3;i<=n;i++)
    {
     c=a+b;
     printf("%d\t",c);
     a=b;
     b=c;

    }

}