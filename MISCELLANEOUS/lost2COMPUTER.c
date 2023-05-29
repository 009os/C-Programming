
#include<stdio.h>
int main()
{
    int i, n,m=0;
    printf("YOU HAVE ONLY 21 MATCHSTICKS TO CHOOSE - YOU CAN CHOOSE 1,2,3,4 at a TIME . ");
    while(m!=25)
    {
        printf("\nPLEASE PICK YOUR MATCHSTICKS : ");
        scanf("%d",&n);
        m=m+5;
        if(m==25)
        { printf("YOU LOST");
        break;
        }
        printf("\nCOMPUTER SELECTED : %d matchsticks",(5-n));
        
    }
    
    
    
    
}