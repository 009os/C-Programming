#include <stdio.h>

int main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
  
  printf("ENTER 2D ARRAY 1 : ");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  
  printf("ENTER 2D ARRAY 2 : ");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          scanf("%d",&b[i][j]);
      }
  }
  
  printf("\nTHE SUM OF BOTH 2D ARRAY IS : \n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          c[i][j]=a[i][j]+b[i][j];
          printf("%d\t",c[i][j]);
      }
      
      printf("\n");
  }
    return 0;
}


