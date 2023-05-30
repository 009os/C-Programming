#include<stdio.h>
int main()
{
    int i,a[10],b[10],add[10];
    
    printf("ENTER 1st ARRAY :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    printf("ENTER 2nd ARRAY :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    
    printf("THE SUM OF BOTH ARRAYS IS :\t");
    for(i=0;i<10;i++)
    {
        add[i]=b[i]+a[i];
        printf("%d\t",add[i]);
    }
    

    
}




