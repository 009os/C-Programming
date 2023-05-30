#include <stdio.h>
void divi(int,int,int*);
int main()
{
    int a,b,divis;
    scanf("%d %d",&a,&b);
    divi(a,b,&divis);
    printf("The GREATEST divisor is : %d",divis);
    return 0;
}

void divi(int a,int b,int*divis)
{
    if(a<b)
    {
        for(int i=2;i<=a;i++)
        {
            if((b%i==0)&&(a%i==0))
            {
                *divis=i;
            }
        }
    }
    
    else
    {
        for(int i=2;i<=b;i++)
        {
            if((b%i==0)&&(a%i==0))
            {
                *divis=i;
            }
        }
    }
    
}

