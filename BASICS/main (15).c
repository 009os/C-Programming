/*Write a program to print all prime numbers from 1 to 300. 
(Hint: Use nested loops, break and continue)*/

#include<stdio.h>
int main()
{
    int i, j,count;
  
    
    for(i=2;i<=300;i++)
    {
        count=0;
        for(j=2;j<300;j++)
        {
            if(i%j==0)
            count++;
        }
        
        if(count==1)
        printf("%d\n",i);
            
    }
        
        
        
    }

