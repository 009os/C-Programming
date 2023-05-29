#include<stdio.h>
int main()
{
    int i=0,j=0,k=0,n1,n2,n3,n4;
    printf("ENTER NUMBER OF ROWS AND COLOUMN OF 1ST MATRIX :\n");
    scanf("%d %d",&n1,&n2);
    
    printf("ENTER NUMBER OF ROWS AND COLOUMN OF 2nd MATRIX :\n");
    scanf("%d %d",&n3,&n4);
    
    int a[n1][n2],b[n3][n4],c[i][j];
    
    if(n2!=n3)
    {
        printf("Matrix multiplication is not possible  ");
    }
    
    else
    {
        printf("ENTER MATRIX 1ST :\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                scanf("\t%d",&a[i][j]);
            }
        }
        
        printf("ENTER MATRIX 2nd :\n");
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n4;j++)
            {
                scanf("\t%d",&b[i][j]);
            }
        }
        
        
        printf("\nTHE MATRIX AFTER MULTIPLICATION IS :\n ");
         for(i=0;i<n1;i++)
        {
            
            for(j=0;j<n4;j++)
            {
                c[i][j]=0;
                for(k=0;k<n4;k++)
                {
                    c[i][j]=(c[i][j])+(a[i][k])*(b[k][j]);
                   
                }
                
                printf("%d\t",c[i][j]);
            
            }
            printf("\n");
        }
        
        
    }
return 0;
}
