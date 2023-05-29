#include<stdio.h>
int main()
{
    int n,i,num,N=0,m=1000000000,range;
    printf("ENTER THE SET OF NUMBER YOU WANT :");
    scanf("%d",&n);
    printf("Please enter your numbers :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(N<num)
        N=num;

        if(m>num)
        m=num;

    }
    range=N-m;
    printf("\nTHE RANGE IS : %d",range);
    
}