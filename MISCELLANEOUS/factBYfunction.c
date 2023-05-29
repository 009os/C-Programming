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
    int count;
    for(count=2;(num>1);count++)
    {
        while(num%count==0)
        {
         printf("%d\n",count);
         num=num/count;
            
        }
    }
    printf("\n");
}