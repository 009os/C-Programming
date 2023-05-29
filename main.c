#include <stdio.h>
#include <stdlib.h>

void Insert();
void Print();
void delete();

struct data
{
    char fName[50];
    char lName[50];
    char course[50];
    int age;
    int roll;
    struct data *next;
};



struct data *list = NULL;

int main()
{
    int emp, choice, i;
    printf("\n\t\t\t\t\t|-------------------------------------------|\n");
    printf("\t\t\t\t\t| WELCOME TO STUDENT DATA-MANAGEMENT SYSTEM |\n");
    printf("\t\t\t\t\t|-------------------------------------------|\n\n");
    
       do{ printf("\nENTER 1 FOR ADDITIONS, 2 FOR DELETION,  ELSE PRESS ANY OTHER KEY TO LEAVE : ");
        scanf("%d", &choice);
        
        if(choice==1)
        {
        printf("\nPLEASE ENTER THE NUMBER OF STUDENT YOU WANT TO ADD : ");
        scanf("%d", &emp);
        printf("\n");

        for (i = 0; i < emp; i++)
        {
            Insert();
        }

        Print();
            
        }
        
        else if(choice==2)
        {
        delete();
        Print();
        }
        
        else
        break;
           
       }while ((choice == 1)||(choice==2));

    
  

    return 0;
}

void Insert()
{
    struct data *a, *dynamicS;

    dynamicS = (struct data *)malloc(sizeof(struct data));

    printf("ENTER FIRST NAME : ");
    scanf("%s", &*dynamicS->fName);
    printf("ENTER LAST NAME : ");
    scanf("%s", &*dynamicS->lName);
    printf("ENTER (%s) SAPID : ", dynamicS->fName);
    scanf("%d", &dynamicS->roll);
    printf("ENTER (%s) AGE : ", dynamicS->fName);
    scanf("%d", &dynamicS->age);
    printf("ENTER (%s) COURSE NAME : ", dynamicS->fName);
    scanf("%s", &*dynamicS->course);
    printf("\n");
    dynamicS->next = NULL;

    if (list == NULL)
    {
        list = dynamicS;
    }

    else
    {
        a = list;
        while (a->next != NULL)
        {
            a = a->next;
        }

        a->next = dynamicS;
    }
}

void Print()
{
    struct data *a;

    a = list;
    printf("\nTHE STUDENT's DETAILS ARE : \n");

    while (a != NULL)
    {
        printf("\tTHE NAME IS : %s %s \t|SAP-ID : %d\t|  AGE : %d \t| COURSE : %s \t  \n", a->fName,a->lName,a->roll, a->age,a->course);
        a = a->next;
    }
}

void delete()
{
    struct data *a;
    int s;
    struct data *q;

    a = list;
    q = list->next;
    printf("\nPLEASE ENTER A SAP ID TO DELETE DATA : \n");
    scanf("%d",&s);
    while(q->roll!=s && q->next!=NULL)
    {
        a=a->next;
        q=q->next;
    }

if(s==q->roll)
{
    a->next=q->next;
    free(q);
}
        
    
}
