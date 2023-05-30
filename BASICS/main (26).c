#include<stdio.h>
int main()
{
    int i,a[10],add=0;
    
    printf("ENTER AN ARRAY :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<10;i++)
    {
        add=add+a[i];
        
    }
    
    printf("\nTHE SUM IS : %d",add);
    
}

