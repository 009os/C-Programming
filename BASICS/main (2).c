
#include <stdio.h>

void swapr(int * ,int *);

int main()
{
    int a,b;
    printf("TWO NUMBERS : \n");
    scanf("%d %d",&a,&b);
    
    swapr(&a,&b);
    printf("%d %d",a,b);

    return 0;
}

void swapr(int*x,int*y)
{
    int temp;
    
    temp=*x;
    *x=*y;
    *y=temp;
}
