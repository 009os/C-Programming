#include<stdio.h>
void fibonacci(int,int,int,int,int);
int main()
{
    int i,n,a=0,b=1,c;
    printf("ENTER A NUMBER TILL THAT YOU WANT FIBONACCI : ");
    scanf("%d",&n);
    printf("%d \t %d\t",a,b);
   
    fibonacci(a,b,c,i,n);
        
return 0;   
}

void fibonacci(int a,int b,int c,int i,int n)
{
    
    for(i=3;i<=n;i++)
    {
     c=a+b;
     printf("%d\t",c);
     a=b;
     b=c;
    }
}

