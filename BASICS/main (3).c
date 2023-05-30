#include<stdio.h>

void roman(int num)
{
    if(num>1000)
    {
        printf("M");
        roman(num-1000);
    }
    
    else if(num>500)
    {
        printf("D");
        roman(num-500);
    }
    
    else if(num>100)
    {
        printf("C");
        roman(num-100);
    }
    
    else if(num>50)
    {
        printf("L");
        roman(num-50);
    }
    else if(num>10)
    {
        printf("X");
        roman(num-10);
    }
    
    else if(num>5)
    {
        printf("V");
        roman(num-5);
    }
    
    else if(num>1)
    {
        printf("I");
        roman(num-1);
    }
    else if(num==1)
    printf("I");
}

int main()
{
    int num;
    printf("PLEASE TYPE A YEAR : ");
    scanf("%d",&num);
    
    roman(num);
    return 0;
    
}





