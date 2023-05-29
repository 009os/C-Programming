#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int rolln[10];
    char course[20];
    char email[50];
    
};

int main()
{
    int i,n,num,roll;
    printf("ENTER THE NUMBER OF STUDENTS : ");
    scanf("%d",&n);
    struct student students[n];
    for(i=0;i<n;i++)
    {
      printf("\nEnter Name: ");
      scanf("%s", students[i].name);
      printf("Enter Roll NUMBER: ");
      scanf("%d", students[i].rolln);
      printf("Enter course Name: ");
      scanf("%s", students[i].course);
      printf("Enter email: ");
      scanf("%s", students[i].email);
      
    }
    
    printf("\nENTER THE ROLL NUMBER OF STUDENT : ");
    scanf("%d",&roll);
    for(i=0;i<n;i++)
    {
        if(*students[i].rolln==roll)
        {
        printf("NAME: %s",students[i].name);
        printf("\nCOURSE : %s",students[i].course);
        printf("\nEMAIL : %s ",students[i].email);
        
        
        }
        
       
    }
 
}