
#include <stdio.h>

int main()
{
    float a,b,c;
    printf("ENTER YOUR NUMBERS :\n");
    scanf("%f %f",&a,&b);
    
    a=b;
    b=c;
    c=a;
    
    printf("A and B are :%f %f",a,b);
    
    
    

    return 0;
}

