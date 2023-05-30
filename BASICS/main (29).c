/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour.*/

#include<stdio.h>
int main()
{
    int i=1,n,ot,op;
    while(i<10)
    {
        printf("\nENTER THE NUMBER OF OVERTIME HOURS OF EMPLOYEE %d :",i);
        scanf("%d",&n);
        if(n>40)
        {
            ot=n-40;
            op=ot*12;
            printf("OVER PAY OF %d is %d",i,op);

        }
        else
        printf("Firstly do some work before asking for over pay");
        i++;
    }
}
