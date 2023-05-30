#include<stdio.h>
void prime_fact(int num);

int main()
{
    int num;
    printf("ENTER a NUMBER : ");
    scanf("%d",&num);
    prime_fact(num);
    
    return 0;
}

void prime_fact(int num)
{
    static int count=2;
    
    if(num==1)
    return;
   
    
    while(num%count==0)
    {    printf("%d\n",count);
         num=num/count;
    }
    
    count++;
    prime_fact(num);
        
}






