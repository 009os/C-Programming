#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,N,a[N];

	printf("Enter a number to check wheather it is a palindrome or not :- ");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
        i++;
	}
    N=i;
	for(j=0;j<N;j++)
	{
		if(a[j]==a[(N)-j])
		printf("THE number is a palindrome\n");
		
		else if(a[j]!=a[(N)-j])
		printf("not a palindrome\n");
	}

return 0;
}