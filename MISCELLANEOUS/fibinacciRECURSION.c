#include<stdio.h>
void fibonacci(int);
int main()
{
    int i,n,a=0,b=1,c;
    printf("ENTER A NUMBER TILL THAT YOU WANT FIBONACCI : ");
    scanf("%d",&n);
    printf("%d \t %d\t",a,b);
   
    fibonacci(n-2);
        
return 0;   
}

void fibonacci(int n)
{

    static int a=0,b=1,i,c;
    if(n!=0)
    {
       c=a+b;
       printf("%d\t",c);
       a=b;
       b=c;
    

      fibonacci(n-1);

    }
}