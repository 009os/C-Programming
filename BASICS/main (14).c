#include<stdio.h>

int fact(int);
int main()
{
    float i, add=0;
    
    for(i=1;i<=7;i++)
    {
        add=add+(i/(fact(i)));
    }
    printf("%f",add);
    
    
}

int fact(int n)
{
    int factorial;
    if(n==1)
    return 1;
    
    else
    {
        factorial=n*(fact(n-1));
    }
    
    return factorial;
}
