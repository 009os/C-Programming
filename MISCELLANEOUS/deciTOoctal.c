#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,N,res=0,M,rev=0;
    printf("Enter the number to convert it into OCTAL : ");
    scanf("%d",&n);
    while(n!=0)
    {
        N=n%8;
        n=n/8;

        res=res+N;
        if(n==0)
        break;
        res=res*10;
        
    }
    
    while(res!=0)
    {
        M=res%10;
        res=res/10;
        rev=rev+M;
        if(res==0)
        break;
        rev=rev*10;
    }


printf("%d",rev);
}