#include<stdio.h>
int main()
{
 int i=0,n,N,j=0,k=0,l=0;
 printf("HOW MANY NUMBERS YOU WANTS TO TAKE :\t");
 scanf("\n%d",&n);

for(i=0;i<n;i++)
{
 scanf("%d",&N);
 if(N<0)
 {j++;}
 else if(N>0)
 {k++;}
 else
 l++;

}
printf("\nTHE NEGATIVES ARE :%d",j);
printf("\nTHE POSITIVES ARE :%d",k);
printf("\nTHE ZEROES ARE :%d",l);

return 0;
    
}