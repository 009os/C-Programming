#include <stdio.h>

int main()
{
 
 int div1,res=0,n,div2,final;
 
 printf("ENTER YOUR NUMBER TO GET ITS REVRSE :");
 scanf("%d",&n);
 div1=n%10;
 res=div1*10000;
 int num=n/10;
 
 div2=num%10;
 int res2=div2*1000;
 
 int num1=num/10;
 int div3=num1%10;
 int res3=div3*100;
 
 int num2=num1/10;
 int div4=num2%10;
 int res4=div4*10;
 
 int num3=num2/10;
 int div5=num3%10;
 int res5=div5*1;
 
 final= res+res2+res3+res4+res5;
 printf("%d",final);
 
    return 0;
}
