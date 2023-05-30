#include<stdio.h>
int main()
{
  int i=0,j=0,n,k=0,p,z;
  scanf("%d",&n);
  /**first TRIANGLE**/
  p=n;
  
  while(i<n)
  {
  	j=0;
  	p--;
  	k=0;
  	 while(k<p)
	  {
	  	printf(" ");
	  	k++;
	  }
	  
  	while(j<=i)
  	{
  		printf("* ");
  		j++;
  		
	  }
	  printf("\n");
	  i++;
	 }	
	 
	 /*SECOND TRIANGLE*/
	 
i=n;
p=0;
  while(i>=0)
  {
  	j=0;
  	p++;
  	k=0;
  	while(j<i)
  	{
  		printf("* ");
  		j++;
  		
	  }
	  printf("\n");
	  i--;
	  
	  while(k<p)
	  {
	  	printf(" ");
	  	k++;
	  }
	  
	  
   }
  return 0;

}



