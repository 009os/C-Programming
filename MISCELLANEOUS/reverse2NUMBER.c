#include<stdio.h>
#include<math.h>
int main()
{
    int n,N,rev=0,i,m;
    printf("ENTER NUMBER OF DIGIT OF A NUMBER :\n");
    scanf("%d",&i);
    printf("Enter YOUR NUMBER :\n");
    scanf("%d",&n);

    while(n!=0)
    {
        N=n%10;
        n=n/10;
        rev=rev+(N*pow(10,i-1));
        i--;
       
    }
    printf("%d",rev);
}