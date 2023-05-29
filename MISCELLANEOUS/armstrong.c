/*Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For 
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,n,res=0;
    for(i=1;i<=500;i++)
    {n=i;
    res=0;
        while(n!=0)
        {
          num=n%10;
          n=n/10;
          res=res+pow(num,3);

        }
        if(i==res)
        printf("\nTHE ARMSTRONG NUMBER IS : %d",i);
        
       
    }
}