#include <stdio.h>
#include<math.h>

struct triangle
{
  int side1;
  int side2;
  int side3;
};

int
main ()
{
  int i,j,n,k,b[k],max;
  
  printf("Enter the number of triangles : ");
  scanf ("%d", &n);
  int p[n],temp;
  float s[n];
  struct triangle t[n];
  for (i = 0; i<n; i++)
    {
      printf("Enter sides : ");
      scanf ("%d\t%d\t%d", &t[i].side1, &t[i].side2, &t[i].side3);
      p[i]=((t[i].side1)+(t[i].side2)+(t[i].side3))/2;
      s[i]=pow((p[i]*(p[i]-t[i].side1)*(p[i]-t[i].side2)*(p[i]-t[i].side3)),0.5);
    }
    

  for(i=0; i<n; i++)
  {
      for(j=0;j<n-i-1;j++)
      if(s[i]>s[i+1])
      {
          
          temp=s[j];
          s[j]=s[j+1];
          s[i+1]=temp;
          
          temp=t[j].side1;
          t[j].side1=t[j+1].side1;
          t[j+1].side1=temp;
          
           temp=t[j].side2;
          t[j].side2=t[j+1].side2;
          t[j+1].side2=temp;
          
           temp=t[j].side3;
          t[j].side3=t[j+1].side3;
          t[j+1].side3=temp;
      
      }
  }

  
  for(i=0;i<n;i++)
  {
      printf("%d\t%d\t%d\t",t[i].side1,t[i].side2,t[i].side3);
      printf("\n");
  }
  
  
    
    
    
    

}    
    
    
    

