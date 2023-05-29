#include <stdio.h>  
#include<string.h>
#include<stdlib.h>

struct operation  
{  
    int rev;
    char *name;
    struct operation *next;  
};  
struct operation *front=NULL;  
struct operation *rear=NULL;  
 
void enqueue(int rev,char name[])  
{    char *name1;
    name1=(char*)malloc(50);
   
    strcpy(name1,name);
  
    struct operation *newnode;  // declaration of pointer of struct node type.  
    newnode=(struct operation *)malloc(sizeof(struct operation));  // allocating the memory to the newnode  
    newnode->rev=rev;
    newnode->name=name1;
    newnode->next=0;  
    if(rear==NULL) 
    {  
        front=rear=newnode;  
        rear->next=front;  
    }  
    else  
    {  
        rear->next=newnode;  
        rear=newnode;  
        rear->next=front;  
    }  
}  
  

void dequeue()  
{  
    struct operation *temp;  
    temp=front;  
    if((front==NULL)&&(rear==NULL))  // checking whether the queue is empty or not  
    {  
        printf("\nQueue is empty");  
    }  
    else if(front==rear)  // checking whether the single element is left in the queue  
    {  
        front=rear=NULL;  
        free(temp);  
    }  
    else  
    {  
        front=front->next;  
        rear->next=front;  
        free(temp);  
    }  
}  
  
void peek()  
{  
    if((front==NULL) &&(rear==NULL))  
    {  
        printf("\nQueue is empty");  
    }  
    else  
    {   printf("\n\tNEW FRONT ELEMENT (company NAME IS) : %s", front->name);
        printf("\n\tAND Its revenue is :  %d", front->rev);  
    }  
}  
  
 
void display()  
{  
    struct operation *temp;  
    temp=front;  
    printf("\n The elements in a Queue are : ");  
    if((front==NULL) && (rear==NULL))  
    {  
        printf("Queue is empty");  
    }  
  
    else   
    {  
        while(temp->next!=front)  
        {   printf("\nname: %s", temp->name);
            printf("\n%d,", temp->rev);  
            temp=temp->next;  
        }
        printf("\nname %s", temp->name);
        printf("\n%d", temp->rev);  
    }  
}  
  
int main()  
{  
int reve,ch;
char name2[50];
printf("How many company u want : ");
scanf("%d",&ch);
for(int i=0;i<ch;i++)
{   printf("PLEASE ENTER company NAME : ");
    scanf("%s",&name2);
    printf("PLEASE ENTER (%s) revenue : ",name2);
    scanf("%d",&reve);
    enqueue(reve,name2);
 
    
}

    display();   
    dequeue();   
    peek();  
}  