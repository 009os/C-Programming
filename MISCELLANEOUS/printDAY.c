/*PROGRAM TO PRINT DAY OF THE WEEK*/
#include<stdio.h>
int main()
{
	int day;
	printf("ENTER YOUR DAY NUMBER\t");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:printf("MONDAY");
		break;
		case 2:printf("TUESDAY");
		break;
		case 3:printf("WEDNESDAY");
		break;
		case 4:printf("THURSDAY");
		break;
		case 5:printf("FRIDAY");
		break;
		case 6:printf("SATURDAY");
		break;
		case 7:printf("SUNDAY");
		break;
		
	default:printf("PLEASE ENTER A VALID DAY.");
}
	return 0;
	
}