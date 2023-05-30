#include<stdio.h>
void swapn(int,int);

int main()
{
    int num1,num2;
    
    printf("ENTER NUM 1: ");
    scanf("%d",&num1);
    
    printf("ENTER NUM 2: ");
    scanf("%d",&num2);
    
    swapn(num1,num2);
    

return 0;
}

void swapn(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("THE numbers after swap are : NUM 1= %d , NUM 2 = %d",a,b);
}


